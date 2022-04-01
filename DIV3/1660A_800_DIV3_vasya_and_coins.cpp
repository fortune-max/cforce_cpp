//
// Created by fme on 31/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if (a) cout << a + 2 * b + 1 << endl;
        else cout << 1 << endl;
    }
}