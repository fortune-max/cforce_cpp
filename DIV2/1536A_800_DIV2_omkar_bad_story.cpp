#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp, mx = INT_MIN, mn = INT_MAX;
        cin >> n;
        for (int i=0;i<n;i++){
            cin >> tmp;
            mx = max(tmp, mx), mn = min(tmp, mn);
        }
        if (mn < 0) cout << "NO" << endl;
        else{
            cout << "YES" << endl << mx+1 << endl;
            for (int i=0;i<=mx;i++) cout << i << " ";
            cout << endl;
        }
    }
}