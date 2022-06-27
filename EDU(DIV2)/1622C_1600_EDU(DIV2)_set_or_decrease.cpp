//
// Created by fme on 26/06/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, k, total = 0;
vector<int> nums;

int calc_sum(int decrease_ops, int set_ops){
    int subtract = 0;
    decrease_ops = max(0LL, decrease_ops);
    for (int i=0; i<set_ops; i++) subtract += nums[n-i-1] - nums[0];
    subtract += decrease_ops * (set_ops + 1);
    return total - subtract;
}

bool test(int ops){
    int set_ops_lower = 0, set_ops_upper = min(n-1, ops), set_ops_mid;
    if (calc_sum(ops, 0) <= k) return true;
    while (set_ops_upper - set_ops_lower > 1){
        set_ops_mid = (set_ops_upper + set_ops_lower)/2;
        int mid = calc_sum(ops - set_ops_mid, set_ops_mid);
        int mid_l = calc_sum(ops - (set_ops_mid - 1), set_ops_mid - 1);
        int mid_r = calc_sum(ops - (set_ops_mid + 1), set_ops_mid + 1);
        if (mid_r < mid) set_ops_lower = set_ops_mid;
        else if (mid_l < mid) set_ops_upper = set_ops_mid;
        else if ((mid < mid_l && mid < mid_r) or (mid==mid_r or mid==mid_l)) set_ops_lower = set_ops_mid, set_ops_upper = set_ops_mid;
    }
    bool viable = calc_sum(ops - set_ops_upper, set_ops_upper) <= k;
    return viable;
}

signed main(){
    int t; cin >> t;
    while(t--){
        int tmp; cin >> n >> k;
        for (int i=0; i<n; i++) cin >> tmp, nums.push_back(tmp), total += tmp;
        sort(nums.begin(), nums.end());

        int ans_lower = -1, ans_upper = 1000200001, ans_mid;
        while (ans_upper - ans_lower > 1){
            ans_mid = (ans_upper + ans_lower)/2;
            if (test(ans_mid)) ans_upper = ans_mid;
            else ans_lower = ans_mid;
        }
        cout << ans_upper << endl;

        // re-set global vars
        n = 0, k = 0, total = 0; nums.clear();
    }
}