#include<bits/stdc++.h>
using namespace std;

int Get_minimum (int n, vector<int> a) {
  int sum = a[0];
  for(int i=1; i<n; ++i) sum = sum | a[i];  //OR

  bool ss[sum+1][n+1];
  int dp[sum+1][n+1];


for(int i=0; i<= n; ++i){
      ss[0][i] = true;
      dp[0][i] = 0;
  }

  for(int i=1; i<= sum; ++i){
      ss[i][0] = false;
      dp[i][0] = -1;
  }

  for(int i=1; i<=sum; ++i){
      for(int j=1; j<=n; ++j){
          ss[i][j] = ss[i][j-1];
          dp[i][j] = dp[i][j-1];
          if( i >= a[j-1]){
              ss[i][j] = ss[i][j] || ss[i-a[j-1]][j-1];

              if(ss[i][j])
                dp[i][j] = max( dp[i][j-1], dp[i-a[j-1]][j-1]+1 );


          }
      }
  }

  return dp[sum][n];
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t;
    while(t--){
        int a_i,n;
        cin >> n;
        vector<int> A;
        for(int i_A=0; i_A<n; i_A++)
        {
    	    cin >> a_i;
    	    A.push_back(a_i);
        }

        int out_;
        out_ = Get_minimum(n,A);
        cout << out_<<"\n";
    }
}
