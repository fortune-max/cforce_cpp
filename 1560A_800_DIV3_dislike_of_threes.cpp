#include <bits/stdc++.h>
using namespace std;

int del_ct(int n){
    return (floor((7+n)/10.) + floor(n/3.) - floor((27+n)/30.));
}

int main(){
    int t; cin >> t;
    vector <int> arr; arr.push_back(-1);
    for (int i=1; i<=1666; i++)
        if (i%10!=3 && i%3!=0)
            arr.push_back(i);
    while (t--){
        int n; cin >> n;
        cout << arr[n] << endl;
    }
}