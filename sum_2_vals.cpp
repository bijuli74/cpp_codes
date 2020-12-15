#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int x, n, p1, p2;
vector<int> v, v1;


int main(){
	cin >> n >> x ;
	
	for(int i=0; i<n; ++i) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	v1 = v;
	v.push_back(2*mxN);
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<n; ++i){
		auto it = find(v.begin()+i+1, v.end(), x-v[i]);
		if(it != v.end() ) {
			p1 = v[i];
			p2 = *it;
			break;
		}
		else continue;
	}
	auto it0 = find(v1.begin(), v1.end(), p1);
	auto it1 = find(v1.begin(), v1.end(), p2);
	cout << it1-v1.begin()+1<< ' ' << it0-v1.begin()+1 << '\n';
	
	
	return 0;
}
		
	
