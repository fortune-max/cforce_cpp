//
// Created by fme on 08/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int l, r, a; cin >> l >> r >> a;
        int mx_mod = a-1, mx_div = (r/a) * a + mx_mod;
        if (l/a == r/a)
            cout << r/a + r%a << endl;
        else {
            if (mx_div > r) mx_div = r / a - 1;
            else mx_div = r / a;
            cout << mx_div + mx_mod << endl;
        }
    }
}