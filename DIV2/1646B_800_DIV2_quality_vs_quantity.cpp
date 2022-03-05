//
// Created by fme on 04/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        long long blue_sum = nums[0] + nums[1], red_sum = nums[n-1], blue_ct = 2, red_ct = 1;
        while (blue_ct+red_ct <= n){
            if (blue_sum < red_sum and blue_ct > red_ct) break;
            blue_sum += nums[blue_ct], blue_ct++;
            red_sum += nums[n-red_ct-1], red_ct++;
        }
        if (blue_ct+red_ct <= n and blue_sum < red_sum and blue_ct > red_ct)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}