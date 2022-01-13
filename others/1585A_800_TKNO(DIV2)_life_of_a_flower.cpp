#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        int ans = 1 + nums[0];
        for (int i=1; i<n; i++){
            if (nums[i] and nums[i-1]) ans+=5;
            else if (nums[i]==0 and nums[i-1]==0){ ans = -1; break;}
            else if (nums[i]) ans += nums[i];
        }
        cout << ans << endl;
    }
}