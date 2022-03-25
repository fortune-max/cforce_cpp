//
// Created by fme on 23/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if (x==0 and y==0){
            cout << 0 << endl;
            continue;
        } else {
            int sq = x*x + y*y;
            if (pow(floor(pow(sq, 0.5)), 2) == sq) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
}