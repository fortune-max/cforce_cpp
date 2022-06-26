//
// Created by fme on 26/06/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool kills_dragon(vector<int> *diffs, int k, int dragon_hp){
    for (auto mx_dmg: *diffs) dragon_hp -= min(mx_dmg, k);
    return dragon_hp <= 0;
}

signed main(){
    int t; cin >> t;
    while(t--){
        int n, h; cin >> n >> h;
        vector<int> nums(n), diffs;
        for (int i=0; i<n; i++) cin >> nums[i];
        for (int i=0; i<n-1; i++) diffs.push_back(nums[i+1] - nums[i]);
        diffs.push_back(LONG_LONG_MAX);

        int lower_lim = 0, upper_lim = 1e18, mid;
        while (upper_lim - lower_lim > 1){
            mid = (upper_lim + lower_lim)/2;
            if (kills_dragon(&diffs, mid, h)) upper_lim = mid;
            else lower_lim = mid;
        }

        cout << upper_lim << endl;
    }
}
