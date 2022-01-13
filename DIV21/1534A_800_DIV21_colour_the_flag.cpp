#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int i, j, n, m; cin >> n >> m;
        string tmp; vector<string> board_r(n), board_w(n), board_ans(n);
        for (int i=0; i<n; i++)
            cin >> tmp, board_r[i] = tmp, board_w[i] = tmp;

        char start[2]; string row; bool ok_r = 1, ok_w = 1;
        // Try R as first
        for (i=0; i<n; i++){
            if (i%2==0) start[0] = 'R', start[1] = 'W';
            else start[0] = 'W', start[1] = 'R';
            for (j=0; j<m; j++){
                char curr = board_r[i][j], desired = start[j%2];
                if (curr=='.') board_r[i][j] = desired;
                else if (curr != desired) ok_r = false;
            }
        }
        // Try W as first
        for (i=0; i<n; i++){
            if (i%2==0) start[0] = 'W', start[1] = 'R';
            else start[0] = 'R', start[1] = 'W';
            for (j=0; j<m; j++){
                char curr = board_w[i][j], desired = start[j%2];
                if (curr=='.') board_w[i][j] = desired;
                else if (curr != desired) ok_w = false;
            }
        }
        
        if (ok_r) board_ans = board_r;
        else if (ok_w) board_ans = board_w;
        else cout << "NO" << endl;
        if (ok_r || ok_w){
            cout << "YES" << endl;
            for (auto x: board_ans) cout << x << endl;
        }   
    }
}