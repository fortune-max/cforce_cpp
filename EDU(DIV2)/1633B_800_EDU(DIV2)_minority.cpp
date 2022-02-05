//
// Created by Fortune Max-Eguakun on 31/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string num; cin >> num;
        vector<int> freq(2, 0);
        for(auto c: num) freq[c-'0']++;
        if (freq[0] == freq[1]) cout << freq[0] - 1 << endl;
        else cout << min(freq[0], freq[1]) << endl;
    }
}