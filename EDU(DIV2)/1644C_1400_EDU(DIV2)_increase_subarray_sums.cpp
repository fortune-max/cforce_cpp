//
// Created by fme on 30/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> nums(n); vector <pair<int, int>> length_sum(n+1, {INT_MIN,0}); // 1-idx, ign 0
        for (int i=0; i<n; i++) cin >> nums[i];
        for (int start=0; start<n; start++){
            int total_sum = nums[start];
            if (total_sum > length_sum[1].first) length_sum[1] = {total_sum, 1};
            for (int extra=1; extra+start<n; extra++){
                total_sum += nums[extra+start];
                if (total_sum > length_sum[extra+1].first) length_sum[extra+1] = {total_sum, extra+1};
            }
        }

        for (int k=0; k<=n; k++){
            int best_sum = 0;
            for (auto [sum, length]: length_sum)
                best_sum = max(sum + x * min(k, length), best_sum);
            cout << best_sum << " ";
        } cout << endl;
    }
}