//
// Created by Fortune Max-Eguakun on 31/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        double hc, dc, hm, dm, k, w, a; int k1;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        for (k1=0; k1<=k; k1++){
            double lh = (hc + k1 * a) / dm, lm = hm / (dc + (k-k1) * w);
            if (ceil(lh) >= ceil(lm)) break;
        }

        cout << (k1 == k+1 ? "NO" : "YES") << endl;
    }
}