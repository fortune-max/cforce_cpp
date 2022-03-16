//
// Created by fme on 15/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt; cin >> txt;
    int r_idx, b_idx, y_idx, g_idx, r_ans = 0, b_ans = 0, y_ans = 0, g_ans = 0;
    for(r_idx=0; r_idx<txt.size() && txt[r_idx]!='R'; r_idx++);
    for(b_idx=0; b_idx<txt.size() && txt[b_idx]!='B'; b_idx++);
    for(y_idx=0; y_idx<txt.size() && txt[y_idx]!='Y'; y_idx++);
    for(g_idx=0; g_idx<txt.size() && txt[g_idx]!='G'; g_idx++);
    r_idx %= 4, b_idx %= 4, y_idx %= 4, g_idx %= 4;
    for (int i=r_idx; i<txt.size(); i+=4) r_ans += txt[i]=='!';
    for (int i=b_idx; i<txt.size(); i+=4) b_ans += txt[i]=='!';
    for (int i=y_idx; i<txt.size(); i+=4) y_ans += txt[i]=='!';
    for (int i=g_idx; i<txt.size(); i+=4) g_ans += txt[i]=='!';
    cout << r_ans << " " << b_ans << " " << y_ans << " " << g_ans << endl;
}