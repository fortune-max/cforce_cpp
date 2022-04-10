//
// Created by fme on 08/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if (n==5) cout << "1 2 1 1" << endl;
        else if (n==6) cout << "1 3 1 1" << endl;
        else {
            if (n%4 == 0) cout << n/4 << " " << n/4 << " " << n/4 << " " << n/4 << endl;
            else if (n%4 == 1 or n%4 == 3) cout << 2 << " " << n-5 << " " << 2 << " " << 1 << endl;
            else cout << 2 << " " << n-6 << " " << 2 << " " << 2 << endl;
        }
    }
}
