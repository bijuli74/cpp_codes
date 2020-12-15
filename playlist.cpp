#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int n, a[mxN];

// **********
int main(){
	cin >> n;
	map<int, int> mp;
	int ans = 0;
	
	for(int i=0; i<n; ++i) {cin >> a[i];}
		
		for(int i=0, j=0; i<n; ++i){
			while(j<n && mp[a[j]] <1){
				mp[a[j]]++; 
				++j;
			}
			ans = max(j-i, ans);
			mp[a[i]]--;
		}
		cout << ans;
		return 0;
			
}
		
		
