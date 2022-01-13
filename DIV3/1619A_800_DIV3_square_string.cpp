#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string txt; cin >> txt;
        int sz = txt.size(); bool sq = true;
        for (int i=0; i<sz/2; i++)
            sq &= (txt[i] == txt[i+sz/2]);
        if (sz%2) cout << "NO" << endl;
        else cout << (sq?"YES":"NO") << endl;
    }
}