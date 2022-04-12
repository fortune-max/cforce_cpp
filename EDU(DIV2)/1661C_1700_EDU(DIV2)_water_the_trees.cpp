//
// Created by fme on 12/04/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, mx = INT_MIN, total_rem = 0; cin >> n;
        vector<int> nums(n), mod_3(2, 0);
        for (int i=0; i<n; i++)
            cin >> nums[i], mx = max(mx, nums[i]);
        for (auto num: nums)
            mod_3[(mx - num) % 2]++, total_rem += mx - num;

        int base_best_days = (total_rem / 3) * 2 + total_rem % 3, base_actual_days, ans = LONG_LONG_MAX, sub_ans, inc_max = 0;
        do {
            int sub_total_rem = total_rem + inc_max * n;
            int ones = mod_3[(1 + inc_max) % 2];
            int best_days = (sub_total_rem / 3) * 2 + sub_total_rem % 3;
            if (best_days >= max(ones - 1, 0LL) * 2 + bool(ones)) sub_ans = best_days;
            else sub_ans = max(ones - 1, 0LL) * 2 + bool(ones);
            if (ans == LONG_LONG_MAX) base_actual_days = sub_ans;
            ans = min(ans, sub_ans);
            inc_max++;
        } while (ans > base_best_days and total_rem + inc_max*n < base_actual_days/2*3 + base_actual_days%2);
        cout << ans << endl;
    }
}