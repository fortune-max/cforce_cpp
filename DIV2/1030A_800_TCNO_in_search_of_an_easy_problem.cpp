//
// Created by fme on 25/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n, tmp; cin >> n;
    bool hard = false;
    for (int i=0; i<n; i++) cin >> tmp, hard |= tmp;
    cout << (hard?"HARD":"EASY") << endl;
}