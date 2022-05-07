//
// Created by fme on 05/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
        x -= min(x, a), y -= min(y, b);
        cout << (x+y>c?"NO":"YES") << endl;
    }
}