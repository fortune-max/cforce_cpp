//
// Created by fme on 17/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string actual, txt; cin >> actual >> txt;
    vector<int> end_pos = {0};
    for (auto c: txt) {
        if (c == '+')
            for (auto &s: end_pos) s++;
        else if (c == '-')
            for (auto &s: end_pos) s--;
        else {
            for (auto &s: end_pos) s++;
            for (auto s: vector(end_pos.begin(), end_pos.end())) end_pos.push_back(s-2);
        }
    }
    int final_pos = 0;
    for (auto c: actual) final_pos += c=='+'?1:-1;
    double correct = count(end_pos.begin(), end_pos.end(), final_pos);
    printf("%.12f", correct/end_pos.size());
}