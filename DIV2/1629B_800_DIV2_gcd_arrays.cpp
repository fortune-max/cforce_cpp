#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int l, r, k; cin >> l >> r >> k;
        if (l==r)
            cout << (l != 1 ? "YES" : "NO") << endl;
        else{
            int num_odd = (r+1)/2 - l/2;
            cout << (num_odd <= k ? "YES" : "NO") << endl;
        }
    }
}