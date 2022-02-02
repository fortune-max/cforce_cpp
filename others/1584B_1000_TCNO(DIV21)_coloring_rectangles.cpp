//
// Created by Fortune Max-Eguakun on 28/01/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int r, c; cin >> r >> c;
        int ans_1 = r/3 * c, ans_2 = c/3 * r;
        ans_1 += (c/3) * (r%3), ans_2 += (r/3) * (c%3);
        r%=3, c%=3; int s = r*c;
        ans_1 += (s>0) + (s>3), ans_2 += (s>0) + (s>3);
        cout << min(ans_1, ans_2) << endl;
    }
}