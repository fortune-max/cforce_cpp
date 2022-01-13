#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp, odds = 0; cin >> n;
        for (int i=0; i<n*2; i++)
            cin >> tmp, odds+=tmp%2;
        cout << (odds==n?"Yes":"No") << endl;
    }
}