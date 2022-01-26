#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	ll a,b;
	cin>>a>>b;
	if(b==1)
	{
		cout<<"NO\n";
		return 0;
	}
	if(b%2!=0)
	{
		ll k=b/2;
	   ll c=b/2;
	   k++;
	   cout<<"YES\n"<<a*k<<" "<<a*c<<" "<<a*b<<"\n";
	   return 0;

	}
	if(b==2)
	{
		cout<<"YES\n"<<a*3<<" "<<a<<" "<<a*4<<"\n";
	    return 0;

	}
	    cout<<"YES\n"<<a*(b-1)<<" "<<a<<" "<<a*b<<"\n";
	    return 0;

}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}