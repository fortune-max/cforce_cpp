//
// Created by fme on 30/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        int a_l=INT_MAX, a_r=INT_MAX, b_l=INT_MAX, b_r=INT_MAX;
        int al_br = abs(a[0] - b[n-1]), ar_bl = abs(a[n-1] - b[0]), al_bl = abs(a[0] - b[0]), ar_br = abs(a[n-1] - b[n-1]);

        for (auto a_sub: a) b_l = min(b_l, abs(b[0] - a_sub)), b_r = min(b_r, abs(b[n-1] - a_sub));
        for (auto b_sub: b) a_l = min(a_l, abs(a[0] - b_sub)), a_r = min(a_r, abs(a[n-1] - b_sub));

        int two = min(al_bl + ar_br, ar_bl + al_br);
        int three = min(min(al_bl + a_r + b_r, ar_br + a_l + b_l), min(al_br + b_l + a_r, ar_bl + a_l + b_r));
        int four = a_l + a_r + b_l + b_r;

        cout << min(four, min(two, three)) << endl;
    }
}