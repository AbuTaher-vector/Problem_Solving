#include "bits/stdc++.h"
using namespace std;
void code(){
	int n,m;
	cin>>n>>m;
	vector<int>v(n*m);
	for(int i=0;i<n*m;i++) cin>>v[i];
		sort(v.begin(),v.end());
	int mx=v[n*m-1],second_mx=v[n*m-2];
	int mn=v[0],second_mn=v[1];
	int ans1=0,ans2=0;
	if(n>m){
         ans1=((m-1)*(mx-second_mn))+((n-1)*m*(mx-mn));
         ans2=((m-1)*(second_mx-mn))+((n-1)*m*(mx-mn));
	} else {
		ans1=((m-1)*n*(mx-mn))+((n-1)*(mx-second_mn));
         ans2=((m-1)*n*(mx-mn))+((n-1)*(second_mx-mn));
	}
	cout<<max(ans2,ans1)<<"\n";
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}