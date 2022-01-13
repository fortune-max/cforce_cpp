#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<unsigned int> odds;
        int tmp, ans=0, ct=n-1;
        for (int i=0;i<n;i++){
            cin >> tmp;
            if (tmp%2==0){
                ans += ct;
                ct--;
            }
            else if (tmp != 1)
                odds.push_back(tmp);
        }
        for (int i=0; i<odds.size(); i++){
            for (int j=i+1; j<odds.size(); j++){
                if (__gcd(odds[i], odds[j])>1) ans++;
            }
        }
        cout << ans << endl;
    }
}