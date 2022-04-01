//
// Created by fme on 31/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        if (n==1)
            cout << (nums.back()==1?"YES":"NO") << endl;
        else {
            int last = nums[n-1], nxt_last = nums[n-2];
            if (last - nxt_last <= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}