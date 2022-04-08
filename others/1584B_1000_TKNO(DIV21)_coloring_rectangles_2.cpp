//
// Created by fme on 29/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, ans; cin >> n >> m;
        ans = (n*m)/3; ans += bool((n*m)%3);
        cout << ans << endl;
    }
}
