#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        for (int i=0; i<n; i++) if (b[i] > a[i]) swap(a[i], b[i]);
        int max_a = *max_element(a.begin(), a.end());
        int max_b = *max_element(b.begin(), b.end());
        cout << max_a * max_b << endl;
    }
}