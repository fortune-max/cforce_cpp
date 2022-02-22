//
// Created by Fortune Max-Eguakun on 12/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, len; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        int first = nums[0], last = nums[n-1];
        vector<int> len_left(n, 0), len_right(n+1, INT_MAX);
        for (len=1; len<n; len++)
            len_left[len] = max(first, max(nums[len-1], len_left[len-1]));
        for (len=n-1; len>0; len--)
            len_right[len] = min(last, min(nums[len], len_right[len+1]));
        for(len=1; len<n; len++)
            if (len_left[len] > len_right[len]) break;
        cout << (len==n?"NO":"YES") << endl;
    }
}