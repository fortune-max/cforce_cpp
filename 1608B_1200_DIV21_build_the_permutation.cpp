#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n, a, b; cin >> n >> a >> b;
        if (abs(a-b)>1 or (a+b)>(n-2)) cout << -1 << endl;
        else{
            vector <int> perm;
            for (int i=1; i<=n; i++)
                perm.push_back(i);
            if (a == b) for (int i=1; i<=a; i++)
                swap(perm[2*i-1], perm[2*i]);
            else {
                if (a>b){
                    for (int i=1; b; i+=2,b--)
                        swap(perm[i], perm[i+1]);
                    swap(perm[n-1], perm[n-2]);
                }    
                else{
                    for (int i=n-2; a; i-=2,a--)
                        swap(perm[i], perm[i-1]);
                    swap(perm[0], perm[1]);
                }
            }
            for (auto x: perm) cout << x << " "; cout << endl;
        }
    }
}