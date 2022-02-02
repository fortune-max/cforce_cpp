//
// Created by Fortune Max-Eguakun on 01/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        vector<string> board; string tmp;
        for(int i=0; i<n; i++) cin >> tmp, board.push_back(tmp);
        map< int, pair<int, int> > centers; //center coord -> left, right

        // dig right
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if (board[i][j] == '*')
                   for(int I = i+1, J = j+1; I<n && J<m && board[I][J]=='*'; I++, J++)
                       if(board[I-1][J+1] == '*')
                           centers[I*m+J].first = max(centers[I*m+J].first, I-i); // use K values (min 1)

        // dig left
        for(int i=0; i<n; i++)
            for(int j=1; j<m; j++)
                if (board[i][j] == '*')
                    for(int I = i+1, J = j-1; I<n && J<m && board[I][J]=='*'; I++, J--)
                        if(board[I-1][J-1] == '*')
                            centers[I*m+J].second = max(centers[I*m+J].second, I-i); // use K values (min 1)

        vector<int> ok(n*m, 0);
        for(auto c: centers){
            int d = min(c.second.first, c.second.second), pivot = c.first;
            if (d < k) continue;
            int I = pivot / m, J = pivot % m;
            for(int i=0; i<=d; i++){
                int shade_i = I-i, shade_j_1 = J-i, shade_j_2 = J+i;
                ok[shade_i*m+shade_j_1] = 1, ok[shade_i*m+shade_j_2] = 1;
            }
        }

        bool is_ok = true;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (board[i][j] == '*')
                    is_ok &= ok[i*m+j];

        cout << (is_ok?"YES":"NO") << endl;
    }
}