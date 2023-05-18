#include "bits/stdc++.h"
using namespace std;
void code(){
	int n,t;
	cin>>n>>t;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
		int ans,track=0,tag=0;
	for(int i=0;i<n;i++){
		if(t>=a[i]){
           if(b[i]>track){
           	ans=i+1;
           	track = max(track,b[i]);
           	tag++;
           }
		}
		t--;
	}
	if(tag==0) cout<<-1<<"\n";
	else cout<<ans<<"\n";

}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}