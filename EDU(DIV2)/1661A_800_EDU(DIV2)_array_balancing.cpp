//
// Created by fme on 09/04/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        for (int i=1; i<n; i++)
            ans += min(abs(a[i] - a[i-1]) + abs(b[i] - b[i-1]), abs(a[i] - b[i-1]) + abs(b[i] - a[i-1]));

        cout << ans << endl;
    }
}