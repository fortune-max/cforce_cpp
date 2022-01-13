#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, l, r, k, ans=0;
        cin >> n >> l >> r >> k;
        vector<int> bars(n);
        for(int i=0;i<n;i++) cin >> bars[i];
        sort(bars.begin(), bars.end());
        for (int i=0;i<n;i++){
            if (((l<=bars[i]) && (bars[i]<=r)) && (k>=bars[i])){
                ans++;
                k-=bars[i];
            }
        }
        cout << ans << endl;
    }
}