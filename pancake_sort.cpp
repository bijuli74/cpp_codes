#include <bits/stdc++.h>
using namespace std;
const int MAX_D = 1e6;

//TODO Meet in the Middle Bidirectional search on state space DAG
//TODO use BFS to search from target pemrutation to required permutation

int flip(int i, int j, int& a){
	for(int p=i; p<= j+1; ++p){
		swap(a[p], a[p-i] ) ;
	}
	return a;
}


int pancakeSort(int a, int n){
	int cnt =0;
	for(int i=n; i>0; ++i){
		int temp = a[i];
		for(int j=i; j<n; ++j){
			if( a[j] > a[i] ) continue;
			else int temp2 = j;
		}
	}
		flip(i, j, a);
		cnt++;
	}
		
int main(){
	int t, n, a[MAX_D];
	cin >> t;
	while( t--){
		cin >> n;
		for( int i; i<n; ++i) cin >> a[i];
		
		cout << pancakeSort(a, n) << "\n";
		
	}
	return 0;
}
	
	
	
	
