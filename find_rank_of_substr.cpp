#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int find_rank (string s) {
  int n = s.size();
  vector<int> A[26];
  for(int i=0; i< (int) s.size(); ++i){
      int x = s[i] -'a';
      A[x].pb(i);
    }

    int rank = 0;
    for(int i=0; i<26 && 'a'+i<s[0]; ++i){

        if( A[i].size() > 0) {
        for(int j=0; j< (int) A[i].size(); ++j){
            rank =rank+(n-A[i][j]);
            }
        }
    }


vector<string> vs;

for(int i=0; i< (int) A[s[0]-'a'].size(); ++i){
    string ss;
    int j = A[s[0]-'a'][i];
    for(; j<n; ++j){
        ss.pb(s[j]);
        vs.pb(ss);
    }
}

sort(vs.begin(), vs.end());
for(int i=0; i<(int)vs.size(); ++i){
    if(vs[i] != s)
        ++rank;
    else 
        break;

    }

    return rank;
}




int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        string X;
        cin >> X;

        int out_;
        out_ = find_rank(X);
        cout << out_;
        cout << "\n";
    }
}
