#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string tmp, ans = "";
        for (int i=0; i<n-2; i++){
            cin >> tmp;
            if (i==0) ans = tmp;
            else if (tmp[0] == ans.back()) ans += tmp[1];
            else ans += tmp;
        }
        cout << (ans.size()==n?ans:ans+"a") << endl;
    }
}