//
// Created by fme on 15/07/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

char process(int idx, vector< pair<pair<int, int>, pair<int, int>> > *records, string *root){
    if (idx <= (*root).length()) return (*root)[idx-1];
    for (auto [real_pos, map_pos]: *records){
        if (real_pos.first <= idx and idx <= real_pos.second)
            return process(map_pos.first + idx - real_pos.first, records, root);
    }
}

signed main(){
    int t; cin >> t;
    while(t--){
        int n, c, q; cin >> n >> c >> q;
        string txt; cin >> txt;
        int pos = txt.length(); // 1-idx (total length of string at present);
        vector< pair<pair<int, int>, pair<int, int>> > records;
        for (int i=0; i<c; i++){
            int l, r; cin >> l >> r;
            int width = r - l + 1;
            records.push_back({{pos+1, pos+=width}, {l, r}});
        }
        for (int i=0; i<q; i++){
            int query; cin >> query;
            cout << process(query, &records, &txt) << endl;
        }
    }
}
