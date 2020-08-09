#include<bits/stdc++.h>
using namespace std;

const int mxN=2e5;
int n, ct[mxN+1];
vector<int> adj[mxN+1];

void dfs(int s, int e){
	ct[s]=1;
	for(auto u:adj[s]){
		if(u==e) continue;
		dfs(u,s);
		ct[s]+=ct[u];
	}
}

int main(){
   cin>>n;
   for(int i=2;i<=n;i++)
   {
	   int a;
	   cin>>a;
	   adj[a].push_back(i);
	   adj[i].push_back(a);
   }

   dfs(1,0);

   for(int i=1;i<=n;i++)
	   cout<<ct[i]-1<<" "; 

}
