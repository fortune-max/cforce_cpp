#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long n;
    cin >> t;
    while (t--){
        cin >> n;
        if (n<0) cout << n << " " << abs(n)-1 << endl;
        else if (n>0) cout << -(n-1) << " " << n << endl;
        else cout << "-1 1" << endl;
    }
}