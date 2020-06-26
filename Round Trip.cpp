#include<bits/stdc++.h>
using namespace std;

int n,m,a,b;
const int mxN = 1e5;
vector<int> adj[mxN];


int main(){

  cin>>n>>m;
  while(m--){
  	cin>>a>>b;
  	adj[a].push_back(b);
  	adj[b].push_back(a);
  	
  }
	
}
