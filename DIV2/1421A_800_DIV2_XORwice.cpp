//
// Created by fme on 27/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int ans = (a^min(a, b)) + (b^min(a,b));
        cout << ans << endl;
    }
}