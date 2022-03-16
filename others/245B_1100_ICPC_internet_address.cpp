//
// Created by fme on 15/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt, ans; cin >> txt;
    ans += txt[0]=='f'?"ftp://":"http://";
    txt = txt.substr(txt[0]=='f'?3:4);
    auto idx = (' '+txt.substr(1)).find("ru");
    ans += txt.substr(0, idx) + ".ru";
    txt = txt.substr(idx+2);
    if (not txt.empty()) ans += "/" + txt;
    cout << ans << endl;
}