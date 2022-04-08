//
// Created by fme on 10/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, last, tmp;
	cin >> n >> last;
	unordered_set <int> diffs;
	for (int i=0;i<n-1;i++){
		cin >> tmp;
		diffs.insert(tmp-last);
		last = tmp;
	}
	if (diffs.size()==1)
	    cout << (*diffs.begin())+last;
	else
	    cout << last;
}