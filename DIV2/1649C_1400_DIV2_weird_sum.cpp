//
// Created by fme on 06/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, tmp; cin >> n >> m;
    map <int, vector<int> > color_x, color_y;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> tmp;
            color_y[tmp].push_back(i);
            color_x[tmp].push_back(j);
        }
    }

    long long ans = 0, init_sum;
    for (auto [color, idx]: color_x){
        sort(idx.begin(), idx.end());
        init_sum = 0;
        for (int i=1; i<idx.size(); i++) init_sum += idx[i] - idx[0];
        ans += init_sum;
        for (int i=1; i<idx.size() - 1; i++){
            int diff = idx[i] - idx[i-1];
            init_sum -= diff * (idx.size()-i);
            ans += init_sum;
        }
    }

    for (auto [color, idx]: color_y){
        sort(idx.begin(), idx.end());
        init_sum = 0;
        for (int i=1; i<idx.size(); i++) init_sum += idx[i] - idx[0];
        ans += init_sum;
        for (int i=1; i<idx.size() - 1; i++){
            int diff = idx[i] - idx[i-1];
            init_sum -= diff * (idx.size()-i);
            ans += init_sum;
        }
    }

    cout << ans << endl;

}