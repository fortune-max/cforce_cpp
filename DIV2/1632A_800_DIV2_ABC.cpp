//
// Created by Fortune Max-Eguakun on 30/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; int n;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        if (s == "10" or s == "01" or s == "1" or s == "0")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}