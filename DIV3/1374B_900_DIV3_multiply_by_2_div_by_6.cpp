//
// Created by fme on 14/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ans, ct_2 = 0, ct_3 = 0; cin >> n;
        while (n%2 == 0) ct_2++, n/=2;
        while (n%3 == 0) ct_3++, n/=3;
        ct_3 -= ct_2, ans = ct_2;
        if (n != 1 or ct_3 < 0) cout << -1 << endl;
        else cout << ans + ct_3 * 2 << endl;
    }
}