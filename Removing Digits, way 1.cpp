#include<bits/stdc++.h>
using namespace std;

vector<int> d;
int n,ct=0,temp;
int main(){
  cin>>n;
  while(n>0){
    d.clear();
	temp=n;
  	while(temp>0){
	 	 d.push_back(temp%10);
	  	temp = temp/10;
  	}
	int mx = *max_element(d.begin(), d.end());
    n-=mx, ct++; 
  }
  cout<<ct;
}
