//
// Created by fme on 10/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> count(4);
	int n, tmp, ans=1e6+10;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> tmp;
		count[tmp]++;
	}
	for (auto i: count)
		ans = min(ans, n-i);
	cout << ans << endl;
}
