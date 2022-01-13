#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        cout << (((a + b + c) % 3 == 0) ? 0 : 1) << endl;
    }
}