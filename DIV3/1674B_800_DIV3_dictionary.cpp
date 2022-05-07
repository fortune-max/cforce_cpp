//
// Created by fme on 02/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> str_idx; int ct = 1;
    for (char i='a'; i<='z'; i++)
        for (char j='a'; j<='z'; j++)
            if (i != j) str_idx[string{i, j}] = ct, ct++;

    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        cout << str_idx[txt] << endl;
    }
}