#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN=100;
int n;
ar<int, 2> a[mxN];

int main(){
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> a[i][0]; cin >> a[i][1];
	}
	
	sort(a, a+n);
	
	
	int ans = a[0][0]+a[0][1];
	for(int i=1; i<n; ++i){
		
		if(a[i][0]<=ans){
			ans+=a[i][1];
		}
		else{
			
			ans = a[i][0]+a[i][1];
		}
	}
	
	cout << ans;
	return 0;
}
			
			 
		
