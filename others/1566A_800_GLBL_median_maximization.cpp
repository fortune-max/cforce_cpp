#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, s; cin >> n >> s;
        int m = (n+1)/2, mx = s/(n-m+1);
        cout << mx << endl;
    }
}