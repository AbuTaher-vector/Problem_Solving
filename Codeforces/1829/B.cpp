#include "bits/stdc++.h"
using namespace std;
void code(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int ans=0,cnt=0;
    for(int i=0;i<n;i++){
    	if(v[i]==0){
           while(v[i]==0){
           	cnt++;
           	if (i+1==n) break;
           	i++;
           }
           ans = max(ans,cnt);
    		cnt=0;
    	} 
    }
    ans = max(ans,cnt);
    cout<<ans<<"\n";
   
}
int main(){
   int tt;
   cin>>tt;
   while(tt--) code();
}