#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, k, doubles = 0; string txt;
        cin >> n >> k >> txt;
        vector<int> freq(26, 0);
        for (int i=0; i<n; i++) freq[txt[i] - 'a']++;
        for (int i=0; i<26; i++) doubles += freq[i]/2;
        int ans = (doubles/k)*2, singles = n - ans*k;
        ans += (singles >= k);
        cout << ans << endl;
    }
}