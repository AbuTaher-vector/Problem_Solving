#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn n,m,k;
	cin>>n>>m>>k;
	ll r=m-1;
	ll w=m*(n-1);
	ll a=r+w;
 
    if(k==a) cout<<"YES\n";
    else cout<<"NO\n";
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
 
}