//
// Created by fme on 06/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, remaining, total = 0; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i], total += nums[i];
        sort(nums.rbegin(), nums.rend());
        if (nums[0] == 0) {
            cout << 0 << endl;
            continue;
        }
        remaining = max(nums[0] - (total - nums[0]) - 1, 0LL);
        cout << remaining + 1 << endl;
    }
}