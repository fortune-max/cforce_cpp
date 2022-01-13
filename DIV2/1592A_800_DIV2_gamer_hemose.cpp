#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, H, dmg;
    cin >> t;
    while (t--){
        cin >> n >> H;
        vector <int> dmgs(n);
        for(int i=0;i<n;i++)
            cin >> dmgs[i];
        sort(dmgs.begin(), dmgs.end());
        int mx_1 = dmgs[n-1], mx_2 = dmgs[n-2];
        int ans = (H / (mx_1 + mx_2)) * 2;
        H %= (mx_1 + mx_2);
        while (H>0){
            ans += 1;
            H -= dmgs.back();
            dmgs.pop_back();
        }
        cout << ans << endl;
    }
}