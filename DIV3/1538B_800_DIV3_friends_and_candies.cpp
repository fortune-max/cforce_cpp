#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        int total = accumulate(nums.begin(), nums.end(), 0);
        int avg = total/n;
        if (avg*n != total) cout << -1 << endl;
        else {
            int ans = 0;
            for (auto x: nums) if (x > avg) ans += 1;
            cout << ans << endl;
        }
    }
}