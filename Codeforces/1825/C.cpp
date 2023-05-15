#include "bits/stdc++.h"
using namespace std;
void code(){
	int n,m;
	cin>>n>>m;
	int t=n;
	int x;
	vector<int>a,b,c;
	map<int,int>mp;
	while(t--){
		cin>>x;
		if(x>0){
			if(mp[x]==0) a.push_back(x);
			mp[x]++;
		} else {
			if(x==-1) b.push_back(x);
			else c.push_back(x);
		}
	}
	sort(a.begin(),a.end());
	if(b.size()==0 && c.size()==0) cout<<min(m,int(a.size()))<<"\n";
	else {
		int x=c.size()+a.size();
		x=min(m,x);
		int y=b.size()+a.size();
		y=min(m,y);
		int z=0;
		for(int i=0;i<a.size();i++){
			int t = min(1+i+int(b.size()),a[i]);
			int s = min(1+(int(a.size())-1-i)+int(c.size()),m-a[i]+1);
		    z = max(z,t+s-1);
		}
		cout<<max(x,max(y,z))<<"\n";
	}
	
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}