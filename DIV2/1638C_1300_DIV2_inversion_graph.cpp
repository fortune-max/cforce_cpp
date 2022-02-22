//
// Created by Fortune Max-Eguakun on 14/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        int reach = 1, ans = 0, i = 0;
        while (i<n){
            int start = nums[i]; vector<int> taken;
            while(i<n) {
                if(taken.size() < start - reach + 1){
                    if(nums[i] > start) start = nums[i];
                    i++, taken.push_back(nums[i]);
                } else {
                    ans++, reach = start + 1;
                    break;
                }
            }
        }
        cout << ans+1 << endl;
    }
}