#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int prime(nn k)
{
	if(k<4) return 1;
	for(nn i=2;i<=sqrt(k);i++)
	{
		if(k%i==0) return 0;
	}
	return 1;
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--)
	{
		ll x;
		cin>>x;
		ll k=sqrt(x);
		if(k*k!=x) cout<<"NO\n";
		else
		{
			if(k!=1 && prime(k)) cout<<"YES\n";
			else cout<<"NO\n";
		}
		
 
	}
	
		
 
  
}