#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int c1 = n/3, c2 = c1;
        if (n%3==2) cout << c1 << " " << c2+1 << endl;
        else if (n%3==1) cout << c1+1 << " " << c2 << endl;
        else cout << c1 << " " << c2 << endl;
    }
}