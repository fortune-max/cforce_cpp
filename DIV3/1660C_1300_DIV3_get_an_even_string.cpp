//
// Created by fme on 31/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        int taken = 0, idx = 0; set<char> hold;
        while (idx < txt.size()){
            auto c = txt[idx];
            if (hold.contains(c)) taken += 2, hold.clear();
            else hold.insert(c);
            idx++;
        }
        cout << txt.size() - taken << endl;
    }
}