#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        vector<int> nums(4), orig(4);
        for (int i=0;i<4;i++){
            cin >> nums[i];
            orig[i] = nums[i];
        };
        sort(nums.begin(), nums.end());
        int mx = nums[3], nxt = nums[2];
        int df_mx = max(orig[0], orig[1]), df_nxt = max(orig[2], orig[3]);
        int ok = max(df_mx, df_nxt) == mx;
        ok &= min(df_mx, df_nxt) == nxt;
        cout << (ok?"YES":"NO") << endl;
    }
}