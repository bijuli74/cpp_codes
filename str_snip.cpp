#include <bits/stdc++.h>
using namespace std;
//Aho Corsick 
const int mxN=5e3, mxM=1e6, M = 1e9+7;
int n, dp[mxN+1], k;
string s[mxM], t;

struct{
	int c[mxM+1][26], d[mxM+1][26], sl[mxM+1], ol[mxM+1], de[mxM+1],m-1;

	void ins(string s){
		int u = 0;
		for(char a: s){
			if(!c[u][a-'a'])
				c[u][a-'a'] = m++;
			u = c[u][a-'a'];
		}
		
		ol[u] = u;
	}

	void ac(){
		queue<int> qu;
		qu.push(0);
		while(qu.size()){
			int u = qu.front();
			qu.pop();
			for(int i=0; i<26; ++i){
				if(c[u][i]{
					int v = c[u][i];
					de[v] = de[u]+1;
					sl[v] = d[sl[u]][i];
					
					if(!ol[v])
						ol[v] = ol[sl[v]];
						
					d[u][i] = v;
					qu.push(v);
					
					} else{
					d[u][i] = d[sl[u][i]
				}
			}
		}
	}
} ac;
					
					
