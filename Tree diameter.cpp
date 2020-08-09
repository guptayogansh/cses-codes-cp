#include<bits/stdc++.h>
using namespace std;

const int mxN=2e5;
int n,ans,d[mxN+1]; 
vector<int> adj[mxN+1];

void dfs(int s=1, int e=0){
	for(auto u:adj[s]){
		if(u==e) continue;
        dfs(u,s);
		ans = max(d[s]+d[u]+1, ans);
		d[s]=max(d[s], d[u]+1);
	}
}

int main(){
   cin>>n;
   for(int i=2;i<=n;i++){
	   int a,b;
	   cin>>a>>b;
	   adj[a].push_back(b);
	   adj[b].push_back(a);
   }
   dfs();
   cout<<ans;


}
