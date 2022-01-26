#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;

	while(t--){
		ll x,y,n;
		cin>>x>>y>>n;

		ll p=(n-y)/x;
		ll k=p*x+y;

		cout<<k<<endl;
	}
    return 0;
}