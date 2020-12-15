#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mxN =1e5;
int n, x;
ll a[mxN];
ll xorsubarray(const ll& A_xorsum, int l, int r){
	return A_xorsum[r]-A_xorsum[l];
	
int main(){
	cin >> n >> x;
	for(int i=0; i<n; ++i) cin >> a[i];
	
	ll a_xorsum[mxN];
	for(int i=0; i<n; ++i){
		if(i==0) 
			a_xorsum[i] = a[i];
		a_xorsum[i] ^= (ll) a[i];
	}
	
	//cnt no of subarrays with value K , cnt>=x;
	
		
