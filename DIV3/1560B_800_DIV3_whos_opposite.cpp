#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        if (a>b) swap(a, b);
        int diff = b - a, ref_1 = b - a + 1;
        if ((a < ref_1) && (b >= ref_1) && (a + diff == b) && (c <= diff*2)){
            if (c >= ref_1) cout << c - diff << endl;
            else cout << c + diff << endl;
        } else cout << -1 << endl;
    }
}