#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        int ans = 0;
        for (auto c: n) ans = max(c-'0', ans);
        cout << ans << endl;
    }
}