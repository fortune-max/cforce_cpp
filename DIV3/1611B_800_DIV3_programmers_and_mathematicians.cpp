#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        b -= (a+b)%4;
        int ans = min((b-a)/2, a);
        b -= ans*3; a -= ans;
        ans += a/2;
        cout << ans << endl;
    }
}