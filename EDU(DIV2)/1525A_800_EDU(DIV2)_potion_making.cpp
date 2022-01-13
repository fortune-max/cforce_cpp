#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        unsigned int n; cin >> n;
        int den = __gcd(n, 100-n);
        cout << 100/den << endl;
    }
}