//
// Created by fme on 14/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    if (n>31) cout << m << endl;
    else cout << m % (1 << n) << endl;
}