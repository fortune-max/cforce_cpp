#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, u, v;
    cin >> t;
    while (t--){
        cin >> u >> v;
        long long x = -pow(u, 2), y = pow(v, 2);
        cout << x  << " " << y  << endl;
    }
}