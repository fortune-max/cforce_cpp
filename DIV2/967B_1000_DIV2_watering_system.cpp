//
// Created by fme on 10/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, A, B;
	cin >> n >> A >> B;
	int first, hole_sum, tmp, ans=0;
	cin >> hole_sum;
	float numrtr = hole_sum*A;
	vector <int> subsq;
	for(int i=0;i<n-1;i++){
		cin >> tmp;
		subsq.push_back(tmp);
		hole_sum += tmp;
	}
	sort(subsq.begin(), subsq.end());
	while(numrtr/hole_sum<B){
		ans++;
		hole_sum -= subsq.back();
		subsq.pop_back();
	}
	cout << ans << endl;
}
