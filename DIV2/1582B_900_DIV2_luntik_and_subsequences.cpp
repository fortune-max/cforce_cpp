#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, tmp;
    cin >> t;
    while(t--){
        cin >> n;
        int one=0, zeros=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            one += (tmp==1)?1:0;
            zeros += (tmp==0)?1:0;
        }
        cout << ((long long) pow(2, zeros)) * one << endl;
    }
}