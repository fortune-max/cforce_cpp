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
        for (i=0; i<n; i++){
            int complm = nums[i] - k;
            if ((complm==nums[i] and freq[complm]>1) or (complm!=nums[i] and freq[complm])) break;
        }
        cout << (i==n?"NO":"YES") << endl;
    }
}