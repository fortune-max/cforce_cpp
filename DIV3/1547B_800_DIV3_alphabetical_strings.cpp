//
// Created by fme on 19/01/2022.
//

using namespace std;
#include <bits/stdc++.h>

int main(){
    int t, i, n, l, r; cin >> t;
    while (t--){
        string txt; cin >> txt; n = txt.size();
        for (i=0; txt[i]!='a' && i<n; i++);
        l = i, r = min(n, i+1);
        for (i=0; i<n; i++){
            if (txt[l]-'a' == i) l--;
            else if (txt[r]-'a' == i) r++;
            else break;
        }
        cout << (i==n?"YES":"NO") << endl;
    }
}
