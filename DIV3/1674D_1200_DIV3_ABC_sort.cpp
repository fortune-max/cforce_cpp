//
// Created by fme on 04/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        int i = n%2?1:0;
        for (;i<n-1;i+=2) if (nums[i] > nums[i+1]) swap(nums[i], nums[i+1]);

        bool ok = true; int last = INT_MIN;
        for (auto c: nums) ok &= c >= last, last = c;
        cout << (ok?"YES":"NO") << endl;
    }
}