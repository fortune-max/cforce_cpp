#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        if ((n/2+n%2)<k) cout << -1 << endl;
        else {
            vector <string> ans(n, string(n, '.'));
            for(int i=0; (i<n) && k; i+=2, k--) ans[i][i] = 'R';
            for (auto s: ans) cout << s << endl;
        }
    }
}