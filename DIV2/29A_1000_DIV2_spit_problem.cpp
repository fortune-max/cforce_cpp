//
// Created by fme on 12/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, x, d; cin >> n;
    vector <int> pos(6e4+1, -1);
    for(i=0;i<n;i++){
        cin >> x >> d;
        x += 3e4;
        if (pos[x]==x+d) break;
        pos[x+d] = x;
    }
    cout << ( (i==n) ? "NO":"YES") << endl;
}