#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n, k, bit_len; cin >> n >> k; bit_len = log2(n);
        if(n == 4 && k == 3)
            cout << -1 << endl;
        else if (n == k+1){
            for(int i=3; i<n/2; i++)
                cout << i << " " << ( (1<<bit_len)-1 ^ i ) << endl;
            cout << 0 << " " << 2 << endl << 1 << " " << k-2 << endl << k-1 << " " << k << endl;
        }
        else if (k == 0)
            for(int i=0; i<n/2; i++)
                cout << i << " " << ( (1<<bit_len)-1 ^ i ) << endl;
        else {
            int cmpl = ( (1<<bit_len)-1 ^ k );
            cout << 0 << " " << cmpl << endl << n-1 << " " << k << endl;
            for(int i=1; i<n/2; i++){
                if (i == min(k, cmpl)) continue;
                cout << i << " " << ( (1<<bit_len)-1 ^ i ) << endl;
            }
        }
    }
}