#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define ar array
vector<ar<int, 3>> v;
int n; 
int main(){
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		v.pb({b-a, a, b});
	}
	
	sort(v.begin(), v.end());
	int ans =1;
	for(auto it=v.begin()+1; it !=v.end(); ++it){
		if( (*(it-1))[2] <= (*it)[1] ) ++ans;
		else continue;
	}
	
	cout << ans << '\n';
	
	return 0;
}

		
	 
