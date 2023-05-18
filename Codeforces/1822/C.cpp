#include "bits/stdc++.h"
using namespace std;
void code(){
	long long int n;
	cin>>n;
	long long int ans = (n*4)+(n-1)+3+4;
	if(n>4){
       long long int k = n*(n+1)/2;
       k -= (1+2+n+n-1);
       k*=2;
       ans+=k;
	}
	
    cout<<ans<<"\n";
}
int main(){
	int tt;
	cin>>tt;
	while(tt--) code();
}