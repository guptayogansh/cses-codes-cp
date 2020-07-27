#include<bits/stdc++.h>
#define ll long long 
using namespace std;


const int mxN= 5e2, M=1e9+7;
int n;
ll dp[mxN*(mxN+1)/2+1];


int main(){
   cin>>n;
   int s=n*(n+1)/2;
   if(s&1){
	   cout<<0;
       return 0;
   }
   s/=2;
   dp[0]=1;
   for(int i=1;i<=n;i++)
	  for(int j=i*(i+1)/2;j>=i;j--)
		 dp[j]=(dp[j]+dp[j-i])%M; 

   cout<<dp[s]*((M+1)/2)%M; //Multiplying by inverse of two
}
