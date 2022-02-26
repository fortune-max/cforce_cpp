//
// Created by fme on 26/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        auto it = min_element(nums.begin(), nums.end());
        int mn_idx = it - nums.begin();
        if (n>1) {
            cout << n-1 << endl;
            bool plus_one = true;
            for (int i=mn_idx+1; i<n; i++) {
                cout << mn_idx+1 << " " << i+1 << " " << *it << " " << *it + plus_one << endl;
                plus_one = not plus_one;
            }
            plus_one = true;
            for (int i=mn_idx-1; i>=0; i--){
                cout << mn_idx+1 << " " << i+1 << " " << *it << " " << *it + plus_one << endl;
                plus_one = not plus_one;
            }
        }
        else
            cout << 0 << endl;
    }
}