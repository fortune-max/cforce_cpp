//
// Created by Fortune Max-Eguakun on 06/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if (k==1){
            cout << "YES" << endl;
            for(int i=1; i<=n*k; i++) cout << i << endl;
        }
        else if (n%2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int j=0; j<n/2; j++){
                int offset = 2*k*j;
                for(int i=0; i<k; i++) cout << offset + 2*i + 1 << " "; cout << endl;
                for(int i=0; i<k; i++) cout << offset + 2*i + 2 << " "; cout << endl;
            }
        }
    }
}