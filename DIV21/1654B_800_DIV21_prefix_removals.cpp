//
// Created by fme on 20/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        vector<int> newest_first(26, -1);
        for (int i=0; i<txt.size(); i++){
            auto c = txt[i] - 'a';
            newest_first[c] = i;
        }
        int i;
        for (i=0; i<txt.size(); i++){
            auto c = txt[i] - 'a';
            if (newest_first[c] > i) continue;
            else break;
        }
        cout << txt.substr(i) << endl;
    }
}