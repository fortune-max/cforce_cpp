//
// Created by fme on 28/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums;
    if (n%2){
        cout << 1 << " ";
        for (int i=2; i<n; i+=2)
            cout << i+1 << " " << i << " ";
    }
    else
        for (int i=1; i<n; i+=2)
            cout << i+1 << " " << i << " ";
}