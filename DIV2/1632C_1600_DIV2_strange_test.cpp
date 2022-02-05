//
// Created by Fortune Max-Eguakun on 02/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, inc = 0; cin >> a >> b;
        while (true){
            if ( (a+inc | b) == b  || (a | b+inc) == b+inc )
                break;
            inc++;
        }
        cout << min(inc + 1, b - a) << endl;
    }
}