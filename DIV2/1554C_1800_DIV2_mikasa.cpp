//
// Created by fme on 22/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, i, lsb; cin >> n >> m; int x = log2(m+1), y = log2(m+2);
        if (n>m) cout << 0 << endl;
        else if (1<<x == m+1) cout << (1<<x) << endl;
        else if (1<<y == m+2) cout << ((m+1)^n) << endl;
        else{
            int mex = 0, free_roam = 0; m++; // using 32-bit length max
            for (i=31; not (m&1<<i and not (m&1<<i-1)); i--) mex += (n&1<<i)^(m&1<<i);
            mex += (n&1<<i)^(m&1<<i);
            for (lsb=0; not (m&1<<lsb); lsb++);
            // first 0 to last 1
            for (int j=i-1; j>=lsb; j--){
                if (n&1<<j) {
                    if (not(m & 1 << j)) free_roam = 1;
                }
                else
                    if ((m&1<<j) and not free_roam) mex+=1<<j;
            }
            cout << mex << endl;
        }
    }
}