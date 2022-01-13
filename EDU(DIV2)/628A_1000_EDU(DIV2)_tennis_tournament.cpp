#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b, p, ans_b=0, ans_p, nearest_pow;
    cin >> n >> b >> p;
    ans_p = n*p;
    while(n>1){
        nearest_pow = pow(2,floor(log2(n)));
        ans_b += (nearest_pow*b + nearest_pow/2);
        n -= (nearest_pow/2);
    }
    cout << ans_b << " " << ans_p << endl;
}