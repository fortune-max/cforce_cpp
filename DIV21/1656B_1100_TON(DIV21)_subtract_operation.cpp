//
// Created by fme on 29/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k, i; cin >> n >> k;
        vector<int> nums(n); map<int, int> freq;
        for (i=0; i<n; i++) cin >> nums[i], freq[nums[i]]++;
        for (i=0; i<n; i++)
            if (freq[nums[i] - k]) break;
        cout << (i==n?"NO":"YES") << endl;
    }
}