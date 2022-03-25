//
// Created by fme on 25/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tmp, x_coord, y_coord;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin >> tmp;
            if (tmp) x_coord = i, y_coord = j;
        }
    }
    cout << abs(x_coord - 2) + abs(y_coord - 2) << endl;
}