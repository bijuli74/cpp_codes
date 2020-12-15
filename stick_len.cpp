#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 2e5;
int n, a[mxN];

int main(){
	cin >> n;
	for(int i=0; i<n; ++i) cin >> a[i];
	
	sort(a, a+n);
	int m = n%2 ? a[n/2-1] : a[n/2];
	ll ans =0;
	for(int i=0; i<n; ++i){
		ans+=(ll)abs(m-a[i]);
	}
	
	cout << ans;
	return 0;
}
