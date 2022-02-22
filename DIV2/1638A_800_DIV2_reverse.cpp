//
// Created by Fortune Max-Eguakun on 14/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, l, r; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        for(l=1; l<=n; l++) if (nums[l-1] != l) break;
        if (l != (n+1)) {
            for(r=n; r>0; r--) if (nums[r-1] == l) break;
            reverse(&nums[l-1], &nums[r]);
        }
        for (auto num: nums) cout << num << " "; cout << endl;
    }
}