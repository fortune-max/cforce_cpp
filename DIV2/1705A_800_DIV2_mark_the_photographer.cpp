//
// Created by fme on 15/07/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, x, ok=1; cin >> n >> x;
        vector<int> nums(n*2);
        for (int i=0; i<n*2; i++) cin >> nums[i];
        std::sort(nums.begin(), nums.end());
        for (int i=0; i<n; i++)
            ok &= (nums[i+n] - nums[i] >= x);
        cout << (ok?"YES":"NO") << endl;
    }
}