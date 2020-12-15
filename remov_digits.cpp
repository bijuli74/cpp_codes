#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e5, M=1e9+7;
int n, a[mxN];
ll dp[mxN+1];

int main(){
	cin >> n >> m;
	for(int i=0; i<n; ++i) cin >> a[i];
	
	dp[0] = 1;
	for(int i=0; i<n; ++i){
		if(a[i] == 0){
			for(int j=0; j<m; ++j){
				dp[j]= (dp[j] + dp[j-i])%M;
			}
		}
	}
	
	cout << dp[n] << '\n';
	
	return 0;
}
