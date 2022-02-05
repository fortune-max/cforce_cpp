//
// Created by Fortune Max-Eguakun on 31/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int nxt = n/10*10+10, to_rm = n%7, to_add = 7 - to_rm;
        if (to_rm == 0) cout << n << endl;
        else if (n+to_add>=nxt) cout << n-to_rm << endl;
        else cout << n+to_add << endl;
    }
}