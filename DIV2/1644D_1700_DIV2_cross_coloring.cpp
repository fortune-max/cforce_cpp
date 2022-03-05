//
// Created by fme on 23/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k, q, x, y; cin >> n >> m >> k >> q;
        vector<pair<int, int>> queries(q); vector<bool> rows(n), cols(m);
        for(int i=0; i<q; i++) cin >> x >> y, queries[i] = {x, y};
        int mod = 998244353, rows_left = n, cols_left = m; long long ans = 1;

        for (int i=q-1; i>=0 and (cols_left||rows_left); i--){
            bool col_rm = false, row_rm = false;
            auto [x, y] = queries[i];
            if (cols_left and not rows[x-1])
                rows[x-1] = true, row_rm = true;
            if (rows_left and not cols[y-1])
                cols[y-1] = true, col_rm = true;
            if (row_rm or col_rm){
                ans = (ans * k) % mod;
                cols_left -= col_rm, rows_left -= row_rm;
            }
        }

        cout << ans << endl;
    }
}