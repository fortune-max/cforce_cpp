#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll x, n; cin >> x >> n;
        ll mod = n%4;
        ll sign = (x%2==0)?-1:1;
        switch (mod){
            case 0:
                cout << x << endl;
                break;
            case 1:
                cout << x+sign*n << endl;
                break;
            case 2:
                cout << x-sign << endl;
                break;
            case 3:
                cout << -sign*(n+1) + x << endl;
                break;
        }
    }
}