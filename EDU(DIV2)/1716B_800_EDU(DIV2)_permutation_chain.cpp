//
// Created by fme on 07/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; cout << n << "\n";
        vector<int> nums(n+1); int curr = n;
        for (int i=1; i<=n; i++) nums[i] = i;
        for (int i=0; i<n; i++){
            for (int j=1; j<=n; j++) cout << nums[j] << ' '; cout << '\n';
            swap(nums[curr], nums[curr-1]);
            curr--;
        }
    }
}