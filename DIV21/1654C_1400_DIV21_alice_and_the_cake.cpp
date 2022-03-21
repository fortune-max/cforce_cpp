//
// Created by fme on 20/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

auto ceil_2 = [](int num, int div){return num/div + bool(num % div);};

signed main(){
    int t; cin >> t;
    while(t--){
        int n, total_wt = 0; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i], total_wt += nums[i];
        if (n==1){
            cout << "yes" << endl;
            continue;
        }
        priority_queue<int> slice;
        slice.push(total_wt);
        std::sort(nums.begin(), nums.end());
        int idx = n-1;
        while (idx>=0 and slice.top() >= nums[idx]){
            auto top = slice.top();
            slice.pop();
            int l1 = top/2, l2 = ceil_2(top, 2);
            slice.push(l1), slice.push(l2);
            while (slice.top() == nums[idx]) idx--, slice.pop();
        }
        cout << (idx<0?"yes":"no") << endl;
    }
}