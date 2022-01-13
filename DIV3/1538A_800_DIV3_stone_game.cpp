#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        int mx_idx = max_element(nums.begin(), nums.end()) - nums.begin();
        int mn_idx = min_element(nums.begin(), nums.end()) - nums.begin();
        int ll = max(mx_idx, mn_idx) + 1;
        int lr = n - (abs(mx_idx-mn_idx) - 1);
        int rr = n - min(mx_idx, mn_idx);
        cout << min( min(ll, lr), rr ) << endl;
    }
}