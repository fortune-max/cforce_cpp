#include <bits/stdc++.h>
using namespace std;

int factorial_mod_hlf(int x){
    long long product = 1;
    int mod = pow(10, 9) + 7;
    for (int i=3;i<=x;i++)
        product = (product*i) % mod;
    return product;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << factorial_mod_hlf(2*n) << endl;
    }
}