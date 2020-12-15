
#include <bits/stdc++.h>
using namepace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
const int INF = 1e7;
int main(){
	// initially only S has dist = 0 and in the queue
	int n, S, T;
	vi dist(n, 0); dist[S] = 0;
	vi in_queue(n, 0); in_queue[S] = 1;

	while(!q.empty()){
		int u = q.front(); q.pop(); in_queue[u] = 0;
		for( int j =0; j < (int) AdjList[u].size(); j++){
			int v = AdjList[u][j].first, weight_u_v = AdjList[u][j].second;
			if(dist[u] +weight_u_v <dist[v]) {
				dist[v] = dist[u] + weight_u_v;
				if( !in_queue[v]) {
					q.push(v);
					in_queue[v] = 1;
				}
			}
		}
	}
	return 0;
}

