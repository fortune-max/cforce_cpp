//
// Created by fme on 05/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];

        for (int i=n-1; i>0; i--)
            while (nums[i-1] >= nums[i] and nums[i-1])
                nums[i-1] /= 2, ans++;

        int last = INT_MIN; bool ok = true;
        for (auto c: nums) ok &= c > last, last = c;
        cout << (ok?ans:-1) << endl;
    }
}