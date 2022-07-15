//
// Created by fme on 10/07/2022.
//

#include <bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, k, tmp; cin >> n >> k;
        map<int, pair<int, int>> first_last;
        for (int i=1; i<=n; i++){
            cin >> tmp;
            auto it = first_last.find(tmp);
            if (it == first_last.end()) first_last[tmp] = {i, i};
            else first_last[tmp] = {it->second.first, i};
        }
        for (int i=0; i<k; i++){
            int l, r; cin >> l >> r;
            auto it_l = first_last.find(l), it_r = first_last.find(r);
            if (it_l != first_last.end() and it_r != first_last.end() and it_l->second.first < it_r->second.second) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}