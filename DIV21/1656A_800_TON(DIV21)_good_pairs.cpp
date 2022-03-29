//
// Created by fme on 24/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, tmp; cin >> n;
        vector<pair<int, int>> nums;
        for (int i=0; i<n; i++) cin >> tmp, nums.push_back({tmp, i+1});
        sort(nums.begin(), nums.end());
        auto mn = nums[0], mx = nums.back();
        cout << mn.second << " " << mx.second << endl;
    }
}