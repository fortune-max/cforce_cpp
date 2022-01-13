#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n, m, tmp, orz = 0; cin >> n >> m;
        for (int i=0; i<m; i++){
            cin >> tmp >> tmp >> tmp;
            orz = orz | tmp;
        }
        for (int i=0; i<n-1; i++)
            orz = (orz*2)%MOD;
        cout << orz%MOD << endl;
    }
}