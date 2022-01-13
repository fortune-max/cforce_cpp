#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int a, b, c, exp_a, exp_b, exp_c; cin >> a >> b >> c;
        exp_a = b - (c - b), exp_b = a + (c - a)/2.0, exp_c = b + (b - a);
        if ((exp_a >= a && exp_a % a==0) || ((c-a)%2==0 && exp_b >= b && exp_b % b ==0) || (exp_c >= c && exp_c % c==0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}