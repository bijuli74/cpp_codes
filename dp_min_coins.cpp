#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define ll long long 
const int mxN=100, mxX=1e6;
int n, coins[mxN], x;
ll value[mxX+1];

int main(){
	cin >> n >> x;
	
	for(int i=0; i<n; ++i) cin >> coins[i];
	
	//value[0] = 1;
	
	for (int i = 1;  i <= x; i++) {
		value[i] = INF;
			for (int c : coins) {
				if (c <= i) {
					value[i] = min(value[i], value[i-c] + 1);
				}
			}
	}
	
	if( value[x] >= INF) cout << -1;
	
	else cout << value[x] << '\n';
	
	return 0;
}
	
	
