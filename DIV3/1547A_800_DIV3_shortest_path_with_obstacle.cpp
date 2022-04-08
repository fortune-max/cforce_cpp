//
// Created by fme on 19/01/2022.
//

using namespace std;
#include <bits/stdc++.h>

int main(){
    int t; cin >> t;
    while (t--){
        int ax, ay, bx, by, fx, fy, ans=0;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        if ((ax == bx) && (ax == fx) && (bx == fx) && ((ay<fy && fy<by) || (by<fy && fy<ay))) ans += 2;
        else if  ((ay == by) && (ay == fy) && (by == fy) && ((ax<fx && fx<bx) || (bx<fx && fx<ax))) ans += 2;
        ans += abs(bx-ax) + abs(by-ay);
        cout << ans << endl;
    }
}
