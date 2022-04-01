//
// Created by fme on 31/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        int start_idx = -1, stop_idx;
        pair <int, pair<int, int>> ans = {0, {n, 0}}; // total_prod, {l,r}
        // start_idx is at a[i] = zero or [-1 idx]
        while (start_idx<n){
            int first_neg_idx = -1, last_neg_idx = -1, curr_two_pow = 1, curr_two_pos = true; bool iterated = false;
            for (stop_idx=start_idx+1; stop_idx<n and nums[stop_idx]; stop_idx++){
                if (nums[stop_idx] < 0){
                    if (first_neg_idx < 0) first_neg_idx = stop_idx;
                    last_neg_idx = stop_idx;
                }
                if (nums[stop_idx] < 0) curr_two_pos = not curr_two_pos;
                if (abs(nums[stop_idx]) == 2) curr_two_pow += 1;
                iterated = true;
            }
            if (iterated){
                if (curr_two_pos) {
                    if (curr_two_pow > ans.first) {
                        ans = {curr_two_pow, {start_idx + 1, n - stop_idx}};
                    }
                }
                else if (not curr_two_pos and stop_idx - start_idx > 2) {
                    int left_two_pow = 0, right_two_pow = 0;
                    pair <int, pair<int, int>> tmp_ans; // total_prod, {l,r}
                    for (int i=start_idx+1; i<=first_neg_idx; i++) left_two_pow += abs(nums[i])==2;
                    for (int i=stop_idx-1; i>=last_neg_idx; i--) right_two_pow += abs(nums[i])==2;
                    if (right_two_pow > left_two_pow)
                        tmp_ans = {curr_two_pow - left_two_pow, {first_neg_idx + 1, n-stop_idx}};
                    else
                        tmp_ans = {curr_two_pow - right_two_pow, {start_idx + 1, n-last_neg_idx}};
                    if (tmp_ans.first > ans.first) ans = tmp_ans;
                }
            }
            start_idx = stop_idx;
        }
        cout << ans.second.first << " " << ans.second.second << endl;
    }
}