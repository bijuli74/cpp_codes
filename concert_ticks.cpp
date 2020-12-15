#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5, mxM = 2e5;
int n, m, a[mxM];

int main(){
	cin >> n >> m;
	vector<int> s;
	for(int i=0; i<n; ++i) {
		int h;
		cin >> h;
		s.push_back(h);
	}
	
	for(int j=0; j<m; ++j) cin >> a[j];
	
	sort(s.begin(), s.end());
	
	for(int i=0; i<m; ++i){
		auto it = find(s.begin(), s.end(), a[i]-1);
		if(it != s.end()){
			cout << *it << ' ';
			s.erase(it);
		}
		else cout << -1 << ' ';
		
	}
	
	cout << '\n';
	
	return 0;
}
	
	
