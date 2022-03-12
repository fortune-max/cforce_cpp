//
// Created by fme on 06/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n; cin >> n;
    if (n%2) cout << -1 << endl;
    else{
        for (int i=2; i<=n; i+=2)
            cout << i << " " << i-1 << " ";
        cout << endl;
    }
}