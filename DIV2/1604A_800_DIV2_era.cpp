#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a, nxt=1, ans=0;
        cin >> n;
        for (int i=0;i<n;i++){
            cin >> a;
            ans += max(0, a-nxt);
            nxt = max(nxt+1, a+1);
        }
        cout << ans << endl;
    }
}