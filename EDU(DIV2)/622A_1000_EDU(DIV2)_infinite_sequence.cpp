//
// Created by fme on 03/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin >> N;
    long long n = 0.5 * (pow(1+8*N, 0.5) - 1), a = N - n*(n+1)/2;
    cout << (a?a:n) << endl;
}