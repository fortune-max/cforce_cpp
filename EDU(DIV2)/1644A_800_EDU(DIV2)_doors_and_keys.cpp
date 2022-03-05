//
// Created by fme on 22/02/2022.
//

#include <bits/stdc++.h>
using namespace std;
//is small >=97
int main(){
    int t; cin >> t;
    while(t--){
        int ok=1; string txt; cin >> txt;
        vector<int> keys_taken(26,0 );
        for(int i=0; i<6; i++) {
            char dk = txt[i];
            if (dk>=97) keys_taken[dk-'a']++;
            else ok &= keys_taken[dk-'A'];
        }
        cout << (ok?"YES":"NO") << endl;
    }
}