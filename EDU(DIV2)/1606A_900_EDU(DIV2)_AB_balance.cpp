#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string txt; cin >> txt;
        int bal = 0;
        char last = txt[0];
        for (auto c: txt){
            if (c==last) continue;
            bal += (c == 'a')?-1:1;
            last = c;
        }
        if (bal != 0){
            char first_compl = (txt[0] == 'a')?'b':'a';
            txt[0] = first_compl;
        }
        cout << txt << endl;
    }
}