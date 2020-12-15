#include <bits/stdc++.h>
using namespace std;


bool binsearch(int a[],int n, int k, int t){
	int L =0, R = n;
	while( L <=R){
		
	int m = L+(R-L)/2;
	if(a[m]+k < t) L = m+1;
	else if( a[m]-k<= t && a[m]+k >= t ) {
		//a[m] = -1;
		return 1;
		}
		
	else R = m-1;
}

return 0;
	
	
} 
	

int main(){
	
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	
	for(int i=0; i<n; ++i) cin >> a[i];
	for(int i=0; i<m; ++i) cin >> b[i];
	
	sort(a, a+n); sort(b, b+n);
	int cnt = 0;
	for(int bi: b){
			
		 if(binsearch(a, n, k, bi) ) cnt++; 
		 else continue;
	}
	
	cout << cnt << "\n";
	return 0;
}

	
	 
