//
// Created by fme on 10/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string tmp;
	vector<vector<int>> schdl(n);
	for(int i=0;i<n;i++){
		cin >> tmp;
		for(int j: tmp)
			schdl[i].push_back(j-'0');
	}
	int local_sum, ans = 0;
	for(int i=0;i<7;i++){
        		local_sum = 0;
        for (auto v: schdl)
		    local_sum += v[i];
		ans = max(ans, local_sum);
	}
	cout << ans;
}