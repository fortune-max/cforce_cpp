//
// Created by fme on 02/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, x_count = 0; cin >> n;
    string txt; cin >> txt;
    for(auto c: txt){
        if (c!='x')
            x_count = 0;
        else {
            ans += x_count >= 2;
            x_count++;
        }
    }
    cout << ans << endl;
}
