#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t; cin >> t;
    while(t--){
        unsigned long long n; cin >> n;
        vector <unsigned long long> gcds = {0, 0}, nums(n);
        for (long long i=0; i<n; i++){
            cin >> nums[i];
            gcds[i%2] = __gcd(gcds[i%2], nums[i]);
        }
        vector <bool> ans = {true, true};
        for (long long i=0; i<n; i++)
            ans[i%2] = ans[i%2] and nums[i]%gcds[(i%2)^1];
        if (ans[1]) cout << gcds[0] << endl;
        else if (ans[0]) cout << gcds[1] << endl;
        else cout << 0 << endl;
    }
}