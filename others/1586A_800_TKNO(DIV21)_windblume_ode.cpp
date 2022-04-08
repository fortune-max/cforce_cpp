//
// Created by fme on 07/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, tmp, total = 0, odd_idx = -1; cin >> n;
        
        for (int i=0; i<n; i++){
            cin >> tmp, total += tmp;
            if (tmp % 2) odd_idx = i + 1;
        }

        bool composite_total = false;
        for (int div = 2; div<=pow(total, 0.5); div++)
            composite_total |= (total % div == 0);

        cout << (composite_total?n:n-1) << endl;
        for (int i=1; i<=n; i++) {
            if (not composite_total and i == odd_idx) continue;
            cout << i << " ";
        } cout << endl;
    }
}