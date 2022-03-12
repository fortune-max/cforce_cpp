//
// Created by fme on 09/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; char c; cin >> txt >> c;
        int n = txt.size(), i;
        for (i=0; i<txt.size(); i++)
            if (txt[i] == c and i%2==0 and (n-i-1)%2==0)
                break;
        cout << (i == txt.size()?"NO":"YES") << endl;
    }
}