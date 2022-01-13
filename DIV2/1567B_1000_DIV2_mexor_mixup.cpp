#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    while(t--){
        int a, b, xor_cmp, xor_run; cin >> a >> b; a--;
        map <int, int> xor_map = {{0, a}, {3, 0}, {2, a+1}, {1, 1}};
        xor_run = xor_map[a%4], xor_cmp = xor_run ^ b; a++;
        if (xor_run == b) cout << a << endl;
        else if (xor_cmp == a) cout << a+2 << endl;
        else cout << a+1 << endl;
    }
}