#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int n;

int main(){
	cin >> n;
	set<int> s;
	for(int i=0; i<n; ++i) {
		int x; cin >> x;
		s.insert(x); 
	}
	cout << s.size();
}
