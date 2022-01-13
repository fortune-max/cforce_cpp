#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        int last_num = INT_MIN, ans = 0;
        for (int i=n-1;i>=0;i--)
            if (nums[i] > last_num)
                ans++, last_num = nums[i];
        cout << ans-1 << endl;
    }
}