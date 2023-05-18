#include "bits/stdc++.h"
using namespace std;
void code(){
	int n;
	cin>>n;
	vector<long long int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
    cout<<max((v[0]*v[1]),(v[n-1]*v[n-2]))<<"\n";
    
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}