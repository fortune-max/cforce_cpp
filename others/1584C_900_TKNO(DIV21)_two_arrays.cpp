#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, i; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(i=0;i<n;i++)if ((b[i]-a[i]>1) || (a[i]>b[i])) break;
        cout << (i==n?"YES":"NO") << endl;
    }
}