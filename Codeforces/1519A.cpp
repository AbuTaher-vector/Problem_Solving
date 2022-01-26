#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn r,b,d;
	cin>>r>>b>>d;
	nn mn=min(r,b);
	nn mx=max(r,b);
	nn x=mx,y=mn;
	mx/=mn;
	if(x%y!=0) mx++;
	mx=(mx-1);
	if(mx<=d) cout<<"YES\n";
	else cout<<"NO\n";
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
 
}