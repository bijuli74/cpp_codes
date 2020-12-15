#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mxN = 2e5;
int n;

int main(){
	cin >> n;
	ll ans=-1e18, msf = -1e18;
	for(int i=0; i<n; ++i){
		int c; cin>> c;
		msf = max((ll) c, msf+c);
		ans = max(msf, ans);
	}
	
	cout << ans;
	return 0;
}
