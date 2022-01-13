#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string num; cin >> num;
        int total = num[n-1]-'0';
        for (int i=0;i<n-1;i++)
            if (num[i]-'0')
                total += (num[i]-'0') + 1;
        cout << total << endl;
    }
}