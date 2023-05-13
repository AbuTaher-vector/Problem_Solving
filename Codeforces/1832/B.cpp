#include "bits/stdc++.h"
using namespace std;
void code(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	long long int sum = 0;
	for(int i=0;i<n;i++){
          cin>>v[i];
          sum+=v[i];
	} 
		sort(v.begin(),v.end());
	long long int ans = INT_MIN;
	int a=n-1,t=k;
	while(t--) {
		sum-=v[a];
		a--;
	}
	ans = max(ans,sum);
	int l=0,r=n-k;
	while(k--){
		sum+=v[r];
		r++;
		sum-=(v[l]+v[l+1]);
		l+=2;
		ans = max(ans,sum);
	}
   cout<<ans<<'\n';


}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}