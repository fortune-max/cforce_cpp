#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp; cin >> n;
        int mx = INT_MIN, mn = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> tmp;
            mx = max(tmp, mx), mn = min(tmp, mn);
        }
        cout << mx - mn << endl;
    }
}