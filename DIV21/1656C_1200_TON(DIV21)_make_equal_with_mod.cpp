//
// Created by fme on 29/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, one_ct=0; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i], one_ct+=nums[i]==1;
        if (not one_ct){
            cout << "YES" << endl;
            continue;
        }
        set<int> nums_set = set(nums.begin(), nums.end());
        int last = INT_MIN; bool bad = false;
        for (auto c: nums_set){
            bad |= c-last==1;
            last = c;
            if (bad) break;
        }
        cout << (bad?"NO":"YES") << endl;
    }
}