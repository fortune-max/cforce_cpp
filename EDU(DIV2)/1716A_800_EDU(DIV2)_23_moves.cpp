//
// Created by fme on 07/08/2022.
//

#include <bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, ans = INT_MAX; cin >> n;
        if (n==1) ans=2;
        if (n%3==0) ans = min(ans, n/3);
        if (n>=2 and (n-2)%3==0) ans = min(ans, (n-2)/3+1);
        if (n>=4 and (n-4)%3==0) ans = min(ans, (n-4)/3+2);
        cout << ans << "\n";
    }
}