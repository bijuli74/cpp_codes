#include <bits/stdc++.h>
using namespace std;

#define ll long lon

const int mxN = 2e5;

int main(){
	int n, x, a[mxN];
	cin >> n >> x;
	for(int i = 0; i<n; ++i) cin >> a[i];
	
	sort(a, a+n);
	int ans =0;
	//MAKING PAIRS
	
	for(int i=0, j=n-1; i<j; ){
		while(i<j && a[i]+a[j]>x) --j;
		
			if(i>=j) break;
			
			++ans; ++i, --j;
			
		}
	
	cout << n-ans << "\n";
return 0;
}

	
