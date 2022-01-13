#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; string txt; cin >> n >> txt;
        for (auto c: txt){
            if (c == 'U') cout << 'D';
            else if (c == 'D') cout << 'U';
            else cout << c;
        }
        cout << endl;
    }
}