#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void solve()
{
	ll n,a,b;
	cin>>n>>a>>b;
	ll w=n*a;
	ll k=n/2;
	if(n<2) k=0;
	ll m=k*b;
	if(n%2==1) m+=a;
	if(k!=0) cout<<min(m,w)<<"\n";
	else cout<<w<<"\n";

}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) solve();

  
}