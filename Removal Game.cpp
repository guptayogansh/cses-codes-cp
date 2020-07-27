#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int mxN=5e3;
int n, x[mxN];
pair<ll,ll> dp[mxN][mxN];

int main(){
 cin>>n;
 for(int i=0;i<n;i++)
	 cin>>x[i];
 for(int i=n-1;~i;i--){
	 for(int j=i+1;j<n;j++){
		 pair<ll,ll> tr;
		 if(i==j)
			 tr={x[i],0};
		 else{
		  if(dp[i+1][j].second+x[i]>dp[i][j-1].second+x[j])
			  tr={dp[i+1][j].second+x[i], dp[i+1][j].first};
		  else
			  tr={dp[i][j-1].second+x[j],dp[i][j-1].first};
		 }
		 dp[i][j]=tr;
	 }
 }
 cout<<dp[0][n-1].first;
}
