#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	ll l,r,d;
	cin>>l>>r>>d;
	if(d<l || d>r)
	{
		cout<<d<<"\n";
		return 0;
	}
	ll k = r/d;
	k++;
	cout<<d*k<<"\n";
	return 0;



 
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}