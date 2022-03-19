//
// Created by fme on 19/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int reverse_bits(int x){
    string bit_str = bitset<8>(x).to_string();
    reverse(bit_str.begin(), bit_str.end());
    return bitset<8>(bit_str).to_ulong();
}

int main(){
    string txt; getline(cin, txt);
    int curr, prev = 0;
    for (auto c: txt){
        curr = reverse_bits(c);
        cout << (prev - curr + 256) % 256 << endl;
        prev = curr;
    }
}