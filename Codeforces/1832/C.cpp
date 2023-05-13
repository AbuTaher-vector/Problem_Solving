#include "bits/stdc++.h"
using namespace std;
void code(){
	int n;
	cin>>n;
	vector<int>v(n),a;
	long long int contrast=0;
	cin>>v[0];
	a.push_back(v[0]);
	for(int i=1;i<n;i++){
		cin>>v[i];
		if(v[i]!=v[i-1]) a.push_back(v[i]);
	}
	int ans=2;
	if(a.size()==1) cout<<1<<"\n";
	else {
		for(int i=1;i<a.size()-1;i++){
			if(a[i]>a[i-1] && a[i]<a[i+1]) continue;
			else if(a[i]<a[i-1] && a[i]>a[i+1]) continue;
			ans++;
		}
		cout<<ans<<"\n";
	}

}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}