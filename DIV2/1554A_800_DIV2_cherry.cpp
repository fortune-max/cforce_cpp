//
// Created by fme on 21/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; long long ans = 0;
        vector<long long> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        for (int i=0; i<n-1; i++) ans = max(ans, nums[i] * nums[i+1]);
        cout << ans << endl;
    }
}