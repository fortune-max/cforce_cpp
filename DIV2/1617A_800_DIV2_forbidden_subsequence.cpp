#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        string s, t; cin >> s >> t;
        vector<string> chars(26, "");
        for (auto c: s) chars[c-'a'] += c;
        if (t=="abc" && chars[0]!="" && chars[1]!="" && chars[2]!="") swap(chars[1], chars[2]);
        for (auto charz: chars) cout << charz;
        cout << endl;
    }
}