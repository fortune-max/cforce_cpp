//
// Created by fme on 21/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        for (int i=1; i<n-1; i++){
            if (nums[i] > nums[i-1] and nums[i] > nums[i+1]){
                ans++;
                if (i+2<n) nums[i+1] = max(nums[i], nums[i+2]);
                else nums[i+1] = nums[i];
            }
        }
        cout << ans << endl;
        for (auto num: nums) cout << num << " "; cout << endl;
    }
}