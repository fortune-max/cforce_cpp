//
// Created by fme on 02/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2; cin >> s1 >> s2;
        if (s2 == "a") cout << 1 << endl;
        else if (s2.find('a') != string::npos) cout << -1 << endl;
        else cout << fixed << setprecision(0) << pow(2, s1.length()) << endl;
    }
}