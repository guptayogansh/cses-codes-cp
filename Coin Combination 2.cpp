#include<bits/stdc++.h>
#define ll long long
using namespace std;


const int mxN=100, mxX=1e6,M=1e9+7;
int c[mxN],n,x;

ll dp[mxX+1];

int main() { 
    cin>>n>>x;
    for(int i=0;i<n;i++)
	 cin>>c[i];	
	dp[0]=1;
	for(int j=0;j<n;j++){
		for(int i=1;i<=x;i++)
			if(c[j]<=i)
				dp[i]=(dp[i]+dp[i-c[j]])%M;
	}
	cout<<dp[x];
}
