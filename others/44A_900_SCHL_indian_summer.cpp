//
// Created by fme on 10/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	string tmp, tmp_2;
	vector<string> leaves;
	int n; cin >> n;
	for (int i=0;i<n;i++){
		cin >> tmp >> tmp_2;
		leaves.push_back(tmp+ " " +tmp_2);
	}
	unordered_set<string> leaves_2(leaves.begin(), leaves.end());
	cout << leaves_2.size()<< endl;
}
