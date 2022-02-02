#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long x, y; cin >> x >> y;
        if (x==y) cout << x << endl;
        else if (x>y) cout << (x + y) << endl;
        else cout << ((y + (y/x) * x) >> 1) << endl;
    }
}