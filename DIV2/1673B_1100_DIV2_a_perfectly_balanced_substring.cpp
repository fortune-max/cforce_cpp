//
// Created by fme on 30/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        int n = txt.length();
        int distinct = set(txt.begin(), txt.end()).size();
        string base = txt.substr(0, distinct);
        bool ok = base.length() == distinct;
        while (!txt.empty()){
            string swath = txt.substr(0, distinct);
            txt = txt.substr(min(n, distinct));
            ok &= base.starts_with(swath);
            n -= distinct;
        }
        cout << (ok?"YES":"NO") << endl;
    }
}