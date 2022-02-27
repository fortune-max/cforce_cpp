//
// Created by fme on 27/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct coord{
    int x=0, y=0;
};

int main(){
    int n, ans=0; cin >> n;
    string txt; cin >> txt; coord pos;
    bool prev_pos = txt[0]=='U'?1:0, curr_pos; // 1 for uptown, 0 for downtown
    for(int i=0; i<n; i++){
        char c = txt[i];
        if (c=='U') pos.y++; else pos.x++;
        if (pos.x != pos.y) curr_pos = pos.x < pos.y;
        else curr_pos = prev_pos;
        if (curr_pos != prev_pos)
            ans += curr_pos != prev_pos, prev_pos = curr_pos;
    }
    cout << ans << endl;
}