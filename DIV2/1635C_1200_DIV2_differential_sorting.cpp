//
// Created by Fortune Max-Eguakun on 20/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];

        if (is_sorted(nums.begin(), nums.end()))
            cout << 0 << endl;
        else if ( (nums[n-2] > nums[n-1]) or (nums[n-1] < 0 and nums[n-2] < 0) )
            cout << -1 << endl;
        else {
            cout << n-2 << endl;
            for (int i=0; i<n-2; i++)
                cout << i+1 << " " << n-1 << " " << n << endl;
        }
    }
}