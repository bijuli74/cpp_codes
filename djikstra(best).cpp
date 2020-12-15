Usage of tie and emplace_back:

#define mt make_tuple
#define eb emplace_back
typedef tuple<int,int,int> State; // operator< defined

int main(){
  int a,b,c;
  tie(a,b,c) = mt(1,2,3); // assign
  tie(a,b) = mt(b,a); // swap(a,b)

  vector<pair<int,int>> v;
  v.eb(a,b); // shorter and faster than pb(mp(a,b))

  // Dijkstra
  priority_queue<State> q;
  q.emplace(0,src,-1);
  while(q.size()){
    int dist, node, prev;
    tie(dist, ode, prev) = q.top(); q.pop();
    dist = -dist;
    // ~~ find next state ~~
    q.emplace(-new_dist, new_node, node);
  }
}