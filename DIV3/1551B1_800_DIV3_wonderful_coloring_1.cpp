//
// Created by fme on 19/01/2022.
//

using namespace std;
#include <bits/stdc++.h>

int main(){
    int t; cin >> t;
    while (t--){
        float ans = 0;
        string txt; cin >> txt;
        vector<int> freq(26,0);
        for (auto c: txt) freq[c-'a']++;
        for (auto c: freq) if (c) ans += c>1?1:0.5;
        cout << (int) ans << endl;
    }
}