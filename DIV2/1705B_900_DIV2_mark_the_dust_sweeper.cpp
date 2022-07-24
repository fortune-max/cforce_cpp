//
// Created by fme on 15/07/2022.
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
        int idx = 0, ans = 0;
        while (nums[idx]==0 && idx < n-1) idx++;
        for (int i=idx; i<n-1; i++){
            if (nums[i] == 0) ans++;
            ans += nums[i];
        }
        cout << ans << endl;
    }
}