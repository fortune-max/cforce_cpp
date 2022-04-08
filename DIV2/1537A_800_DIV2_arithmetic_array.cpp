using namespace std;
#include <bits/stdc++.h>

int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp, s=0; cin >> n;
        for (int i=0;i<n;i++){
            cin >> tmp;
            s += tmp;
        }
        cout << ((s-n)>=0?(s-n):1) << endl;
    }
}