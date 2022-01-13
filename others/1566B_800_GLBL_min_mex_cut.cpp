#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string txt; cin >> txt;
        int ans = 0, last = '2';
        for (auto c: txt){
            if (c != last) ans += ~c&1;
            last = c;
        }
        cout << min(2, ans) << endl;
    }
}