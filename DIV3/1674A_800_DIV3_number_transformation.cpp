//
// Created by fme on 02/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if (x <= y and y % x == 0)
            cout << "1 " << y/x << endl;
        else
            cout << "0 0" << endl;
    }
}