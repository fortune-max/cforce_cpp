//
// Created by Fortune Max-Eguakun on 30/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int highest_pwr = 2 << int(log2(n-1)) - 1;
        for (int i=n-1; i>=highest_pwr; i--) cout << i << " ";
        for (int i=0; i<highest_pwr; i++) cout << i << " ";
        cout << endl;
    }
}
