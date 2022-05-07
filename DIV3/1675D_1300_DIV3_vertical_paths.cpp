//
// Created by fme on 05/05/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> parent(n + 1); vector <bool> taken_idx(n+1, false);
        for (int i=1; i<=n; i++) cin >> parent[i];

        if (n == 1) {
            cout << "1\n1\n1\n" << endl;
            continue;
        }

        auto not_ends = set(parent.begin(), parent.end());
        cout << (n - (not_ends.size() - 1)) << endl;
        for (int i=1; i<=n; i++){
            if (!not_ends.contains(i) and !taken_idx[i]){
                int I = i; vector <int> path;
                while (!taken_idx[I])
                    path.push_back(I), taken_idx[I] = true, I = parent[I];
                reverse(path.begin(), path.end());
                cout << path.size() << endl;
                for (auto p: path) cout << p << " "; cout << endl;
            }
        }
        cout << endl;
    }
}