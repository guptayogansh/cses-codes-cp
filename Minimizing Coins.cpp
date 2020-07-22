#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxX = 1e6, mxN=100;
int n,x;
int c[mxN];

ll dp[mxX+1];

int main() { 

	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>c[i];
	for(int i=1;i<=x;i++){
      dp[i]=1e9;
	  for(int j=0;j<n;j++)
		  if(c[j]<=i)
			  dp[i]=min(dp[i],1+dp[i-c[j]]); 
	}
	if(dp[x]>=1e9)
		cout<<-1;
	else
		cout<<dp[x];

}
