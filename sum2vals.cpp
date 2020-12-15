#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 2e5;
int n, x, b[mxN];
map<int , int> mp;

int main(){
	cin >> n >> x;
	for(int i=0; i<n; ++i){
		int a;
		cin >> a;
		b[i] = a;
	}
	for(int i=0; i<n; ++i){
		auto it = mp.find(x-b[i]);
		if( it != mp.end()){
			cout << i+1 << ' ' << (*it).second+1;
			return 0;
		}
		mp[b[i]] = i;
	}
	cout << "IMPOSSIBLE" ;
	
	return 0;
}
			
