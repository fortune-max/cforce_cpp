//
// Created by fme on 10/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if (n>19){
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl; int ans = 1;
            for(int i=0; i<n; i++) cout << ans << " ", ans*=3; cout << endl;
        }
    }
}