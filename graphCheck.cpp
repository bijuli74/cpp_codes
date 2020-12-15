#include <bits/stdc++.h>
using namespace std;

#define ar array
typedef vector<int> vi;

const int V, mxV;
vi dfs(V,0), p(V,0), adj[mxV];

void graphCheck(int u){
	dfs[u] = 2;
	for(ar<int, 2> v: adj[u]){
		if(!dfs[v[1]){
			p[v[1]] = u;
			graphCheck(v[1]);
		}
		else if(v[1] == 2){
			if(v[1] == p[u])
				cout <<"Two ways" << v[1] << u <<' '<< u << v[1];
			else{
				cout <<"Back Edge" << v[1] << u<<'\n';
			}
		}
		else if(dfs[v[1]]){
			cout << "Forward edge" << u << v[1];
		}
		
	}
	dfs[u] =1;
}
	
int main(){
	cin >> V;
	for(int i=0; i<V; ++i){
		int a, b, c; //a, b = vertex c = cost
		cin >> a >> b >> c, --a, --b;
		adj[a].push_back({c, b});
		
	}
	for(int i=0; i<V; ++i){
		if(dfs[i] == 0)
			cout << graphCheck(i) << '\n';
		}
	}
		
	
