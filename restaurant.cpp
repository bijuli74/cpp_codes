#include <bits/stdc++.h>
using namespace std;
#define pb push_back

const int mxN=2e5;
int n;
typedef vector<int> vi;
vector<array<int, 2>> v;
vi v2;

int main(){
	cin >> n;
	
	while(n--){
		int a, b;
		cin >> a >> b;
		v.pb({a,0}); v.pb({b,1});
		
}	int ans =0;
	sort(v.begin(), v.end());
	for(auto p: v){
		if(p[1] == 0) ++ans;
		else --ans;
		v2.pb(ans);
	}
	
	cout << *max_element(v2.begin(), v2.end()) << '\n';
	
	return 0;
}

	
