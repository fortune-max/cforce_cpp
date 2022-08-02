//
// Created by fme on 28/07/2022.
//

#include <bits/stdc++.h>
using namespace std;

int bit_len = 262144, LB = log2(bit_len);
double L21 = log2(2*bit_len-1);
// lazy: 1 - set children to 1, 0 - set children to 0, -1 - nothing to propagate
// seg_tree: 1 - all children 1, 0 - all children 0, 2 - children 0 & 1, -1 - Ignore (only in get_range retval).
vector<int> num_freq(200019, 0);
vector<short> seg_tree(bit_len * 2), lazy(bit_len * 2, -1); // 1-idx
auto cmp = [](int x){return 2*bit_len-1-x;};
auto eval = [](int l_idx, int r_idx){
    return seg_tree[l_idx]==seg_tree[r_idx]?seg_tree[l_idx]:2;
};

void build_tree(){
    int start = LB - 1;
    while (start>=0){
        for (int i=1<<start; i<1<<(start+1); i++)
            seg_tree[i] = eval(i*2, i*2+1);
        start--;
    }
}

void push_down(int idx){
    if (lazy[idx] == -1) return;
    seg_tree[idx] = lazy[idx];
    auto left_child = idx << 1, right_child = left_child + 1;
    if (left_child < 2 * bit_len) lazy[left_child] = lazy[right_child] = lazy[idx];
    lazy[idx] = -1;
}

int get_msb(int idx=1){
    if (seg_tree[idx] == 1) {
        auto lower_lim = idx << (int) (L21 - log2(idx));
        return cmp(lower_lim);
    }
    auto left_child = idx << 1, right_child = left_child + 1;
    if (seg_tree[left_child]) return get_msb(left_child);
    return get_msb(right_child);
}

void set_range(int l_bidx, int r_bidx, short val, int idx=1){
    if (lazy[idx] != -1) push_down(idx);
    if (seg_tree[idx] == val) return; // already set, nothing to do
    auto l_idx = cmp(l_bidx), r_idx = cmp(r_bidx);
    auto lower_lim = idx << (int)(L21 - log2(idx));
    auto upper_lim = lower_lim + (1 << (int)(L21 - log2(idx))) - 1;
    auto left_child = idx << 1, right_child = left_child + 1;
    if (l_idx <= lower_lim and upper_lim <= r_idx){
        seg_tree[idx] = val;
        if (left_child < 2 * bit_len) lazy[left_child] = lazy[right_child] = val;
    }
    else if (upper_lim < l_idx or lower_lim > r_idx) return;
    else {
        set_range(l_bidx, r_bidx, val, left_child);
        set_range(l_bidx, r_bidx, val, right_child);
        seg_tree[idx] = eval(left_child, right_child);
    }
}

short get_range(int l_bidx, int r_bidx, int idx=1){
    if (lazy[idx] != -1) push_down(idx);
    auto l_idx = cmp(l_bidx), r_idx = cmp(r_bidx);
    auto lower_lim = idx << (int)(L21 - log2(idx));
    auto upper_lim = lower_lim + (1 << (int)(L21 - log2(idx))) - 1;
    if (upper_lim < l_idx or lower_lim > r_idx) return -1;
    if (seg_tree[idx] != 2) return seg_tree[idx];
    if (l_idx <= lower_lim and upper_lim <= r_idx) return seg_tree[idx];
    else {
        auto left_ans = get_range(l_bidx, r_bidx, idx<<1);
        auto right_ans = get_range(l_bidx, r_bidx, idx<<1|1);
        if (left_ans == -1 or right_ans == -1) return abs(left_ans * right_ans);
        else if (left_ans == right_ans) return left_ans;
        return 2;
    }
}

short smart_lookup(int bidx){
    auto idx = cmp(bidx);
    short ans = seg_tree[idx];
    while (idx){
        if (lazy[idx] != -1) ans = lazy[idx];
        idx >>= 1;
    }
    return ans;
}

int get_left_bidx_contiguous(int bidx, short base){
    auto idx = cmp(bidx);
    if (smart_lookup(cmp(idx)) != base) return cmp(idx+1);
    while (idx>1 and smart_lookup(cmp(idx>>1)) == base) idx >>= 1;
    auto lower_lim = idx << (int)(L21 - log2(idx));
    if (lower_lim == bit_len) return 1;
    return get_left_bidx_contiguous(cmp(lower_lim-1), base);
}

void add(int bidx){
    if (smart_lookup(bidx) == 0) set_range(bidx, bidx, 1);
    else {
        auto left_bidx = get_left_bidx_contiguous(bidx, 1);
        set_range(left_bidx, bidx, 0);
        set_range(left_bidx+1, left_bidx+1, 1);
    }
}

void subtract(int bidx){
    if (smart_lookup(bidx) == 1) set_range(bidx, bidx, 0);
    else {
        auto left_bidx = get_left_bidx_contiguous(bidx, 0);
        set_range(left_bidx, bidx, 1);
        set_range(left_bidx+1, left_bidx+1, 0);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, q, k, l; cin >> n >> q;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i], num_freq[nums[i]]++;
    for (int num=1; num<200019; num++){
        auto freq = num_freq[num];
        if (freq){
            if (freq/2) num_freq[num+1] += freq/2;
            if (freq%2) seg_tree[cmp(num)] = 1;
        }
    }
    build_tree();
    for (int i = 0; i < q; i++) {
        cin >> k >> l;
        if (nums[k - 1] != l) subtract(nums[k - 1]), nums[k - 1] = l, add(l);
        cout << get_msb(1) << '\n';
    }
}
