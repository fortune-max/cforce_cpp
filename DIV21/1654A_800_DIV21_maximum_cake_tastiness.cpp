//
// Created by fme on 20/03/2022.
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
        std::sort(nums.begin(), nums.end());
        cout << nums[n-1]+nums[n-2] << endl;
    }
}