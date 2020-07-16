#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mxN = 2e5;
int n;
ll c=0;
ll a[mxN];

int main() {
  	
	cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
	}

	for(int i=0;i<n;i++){
      ll x=i-1, y=i;
	  if(a[y]<a[x])
		  c+=a[x]-a[y], a[y]+=a[x]-a[y];
	  else
		  continue;
	}
	cout<<c;
}
