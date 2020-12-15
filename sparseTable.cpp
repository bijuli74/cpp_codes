#include <bits/stdc++.h>
using namespace std;

#define MAX_N
#define LOG_TWO_N

class RMQ{
	private:
		int _A[MAX_N], SpT[MAX_N][LOG_TWO_N];
	
	public:
		RMQ(int n, int A[]){
			for(int i=0; i<n; ++i){
				_A[i] = A[i];
				SpT[i][0] = i;
			}
			
			for(int j=1; (1<<j) <=n; ++j){
				for(int i = 0; (1<<j) -1 <n; ++i)//p = i+2^(j-1)   SpT[i][j-1] <SpT[p][j-1]
					if( _A[SpT[i][j-1] ] <_A[SpT[ i+(1<<(j-1)) ][j-1] ] )
						SpT[i][j] = SpT[i][j-1];
					else
						SpT[i][j] = SpT[i+(1<<(j-1))] [j-1];
			}
			
			int query(int i, int j){			// query in O(1)
				int k = (int) floor( log( (double)j - i +1) / log(2.0); // 2^k <= (j-i+1)
				if( (_A[SpT[i][k]] <= _A[SpT[j-(1<<k)+1][k]] )	return SpT[i][k]; 
				else 	return SpT[j-(1<<k) +1] [k];
			}
			
		};
		
		
		
				
