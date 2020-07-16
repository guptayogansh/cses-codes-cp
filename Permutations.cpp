#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>ans;

int main() {
 cin>>n;
 if(n==2||n==3){
	  cout<<"NO SOLUTION";
	  return 0;
 }
 else{

	  for(int i=1;i<=n;i++)
		  if(i%2==0)
			  ans.push_back(i);
	  for(int i=1;i<=n;i++)
		  if(i%2^0)
			  ans.push_back(i); 
 }

 for(auto it: ans)
	 cout<<it<<" ";
}


