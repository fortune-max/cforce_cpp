#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int l1, l2, l3; cin >> l1 >> l2 >> l3;
        bool ans = (l1==l2+l3) || (l2==l1+l3) || (l3==l1+l2); //lb
        bool ans2 = (l1%2==0 && l2==l3) || (l2%2==0 && l1==l3) || (l3%2==0 && l1==l2); //ll
        if (ans || ans2 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}