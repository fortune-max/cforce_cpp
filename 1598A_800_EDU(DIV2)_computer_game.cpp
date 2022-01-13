#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, i;
        string up, down;
        cin >> n >> up >> down;
        for (i=0;i<n;i++)
            if ((up[i]=='1') && (down[i]=='1')) break;
        cout << ((i==n) ? "YES" : "NO") << endl;
    }
}