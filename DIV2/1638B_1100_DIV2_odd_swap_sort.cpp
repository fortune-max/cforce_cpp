//
// Created by Fortune Max-Eguakun on 14/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, tmp, last_odd=0, last_even=0, ok=1; cin >> n;
        for(int i=0; i<n; i++){
            cin >> tmp;
            ok &= (tmp%2 ? last_odd:last_even) <= tmp;
            (tmp%2 ? last_odd:last_even) = tmp;
        }
        cout << (ok?"YES":"NO") << endl;
    }
}