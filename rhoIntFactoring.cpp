#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mulmod(ll a, ll b, ll c) {
	ll x = 0, y = a%c;
	while(b>0){
		if(b%2 == 1) x = (x+y)%c;
		y = (y*2)%c;
		b /=2;
	}
	return x%c;
}

ll gcd( ll a, ll b) { return !b ? a: gcd(b, a%b); }

ll pollard_rho( ll n){
	int i = 0, k = 2;
	ll x = 3, y = 3;				// random seed = 3, other values possible
	while(1) {
		i++;
		x = ( mulmod( x, x, n) + n -1 ) % n;		// generating function
		ll d = gcd( abs(y-x), n);					// the key insight					
		if( d != 1 && d != n) return d;				//found one non-trivial factor
		if(i == k) y =x, k*=2;
	}
	
}

int main() {
	ll n = 2063512844981574047LL
	ll ans = pollard_rho(n);				//break n into 2 non trivial factors
	if ( ans > n/ans) ans = n / ans;		//make ans the smaller factor
	cout << ans << " " << n / ans << "\n";
	
	return 0;
}
