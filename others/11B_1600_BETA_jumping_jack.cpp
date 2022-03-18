//
// Created by fme on 18/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t; t = abs(t);
    int n = (pow(1+8*t, 0.5) - 1) / 2;
    bool perfect_sum = t == (n*(n+1))/2;
    if (perfect_sum) cout << n << endl;
    else{
        n++;
        while ( ((n*(n+1))/2 - t) % 2 ) n++;
        cout << n << endl;
    }
}