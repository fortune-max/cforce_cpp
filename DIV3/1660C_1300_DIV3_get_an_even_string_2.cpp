//
// Created by fme on 03/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct fme{
    int idx; bool hlf; int del;
};

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        int n = txt.length(), idx = 0, mx_score = 0, last_del=0;
        map<int, map<char, fme> > score_store;
        for (auto c: txt){
            if (score_store[mx_score].contains(c)){
                auto char_fme = score_store[mx_score][c];
                score_store[mx_score++][c] = {idx, not char_fme.hlf, char_fme.del - char_fme.hlf + (idx-char_fme.idx-1)};
                last_del = score_store[mx_score-1][c].del;
            } else
                score_store[mx_score][c] = {idx, true, ++last_del};
            idx++;
        }
        cout << n - 2*mx_score << endl;
    }
}