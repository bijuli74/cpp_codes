#include <bits/stdc++.h>
using namespace std;

#define MAX_N 10 // increase/decrease this value as needed
#define max_int numeric_limits<int>::max()


struct Matrix { int mat[MAX_N][MAX_N]; 
	};
	
Matrix matMul(Matrix a, Matrix b, int p, int q, int r) { // O(pqr)
	
Matrix c; int k;
for (int i = 0; i < p; i++)
	for (int j = 0; j < r; j++)
		for (c.mat[i][j] = k = 0; k < q; k++)
			c.mat[i][j] += a.mat[i][k] * b.mat[k][j]; // NOTE CAREFULLY
return c; 
}

// matrix chain multiplication  
int matOrder( const vector<int>& p, int i, int j){ //vec p contains matrices dimensions
	if( i==j )
		return 0;
	int min = max_int;
	int res;
	for(int k=i; k<j; ++k){
		
		res = matOrder(p, i, k) + matOrder(p, k+1, j) + p[i-1]*p[k]*p[j];
		
		if(res<min) 
			min = res;
		}
		
		return min;
	}
	
	matChainMul(const vector<int>& p){
		Matrix m;
		int n= p.size();
		for(int i=0; i<n; ++i)
			m.mat[i][i] = 0;
		
		for(int len=2; len<n; ++len){
			for(int i=1; i< n-len+1; ++i){
				int j = i+len-1;
				m.mat[i][j] = max_int;
				
				for(int k; k<=j-1; ++k){
					
					int cost = m.mat[i][k] + m.mat[k+1][j]+ p[i-1]*p[k]*p[j];
					
					if(cost < m.mat[i][j])	
						m.mat[i][j] = cost;
				}
			}
		}
		
		return m.mat[1][n-1];
	}
	
	

