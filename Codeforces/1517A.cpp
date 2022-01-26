#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	ll n;
	cin>>n;
	if(n%2050!=0) cout<<-1<<"\n";
	else
	{
		n/=2050;
		nn cnt=0;
		while(n) cnt+=n%10,n/=10;
		cout<<cnt<<"\n";
	}
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}