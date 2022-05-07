//
// Created by fme on 30/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        int n = txt.length(), mn = min(txt[0], txt.back()) - 'a' + 1, total = 0, bob, alice;
        for (auto c: txt) total += c-'a'+1;
        if (n%2) bob = mn, alice = total - bob;
        else bob = 0, alice = total;
        cout << (alice>bob?"Alice ":"Bob ") << abs(alice - bob) << endl;
    }
}