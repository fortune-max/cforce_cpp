//
// Created by fme on 09/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, m, x_coord, wt; cin >> n >> m;
        vector <tuple<int, int, int>> wts_idx;
        for (int idx=1; idx<=m; idx++){
            cin >> x_coord >> wt;
            wts_idx.emplace_back(wt, x_coord, idx);
        }
        sort(wts_idx.begin(), wts_idx.end());

        int total_wt = 0; vector<tuple<int, int>> pairs;
        for (int i=0; i<2*n; i++){
            auto [wt, x_coord, idx] = wts_idx[i];
            total_wt += wt;
            pairs.emplace_back(x_coord, idx);
        }
        sort(pairs.begin(), pairs.end());

        cout << total_wt << endl;
        for (int i=0, j=2*n-1; i<j; i++, j--)
            cout << get<1>(pairs[i]) << " " << get<1>(pairs[j]) << endl;
    }
}