#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string txt; cin >> txt;
        int idx = txt.find('N'), idx_2 = txt.rfind('N');
        if ((idx != -1) && (idx == idx_2)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}