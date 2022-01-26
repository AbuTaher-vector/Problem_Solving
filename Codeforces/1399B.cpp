#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn x;
	cin>>x;
	nn ar[x+1],arr[x+1];
	nn mn=1000000000,mnn=1000000000;
	for(nn i=0;i<x;i++)
	{
		cin>>ar[i];
		mn=min(mn,ar[i]);
	}
	for(nn i=0;i<x;i++)
	{
		cin>>arr[i];
		mnn=min(mnn,arr[i]);
	}
	ll step=0;

	for(nn i=0;i<x;i++)
	{
		step+=max((ar[i]-mn),(arr[i]-mnn));

	}
	cout<<step<<"\n";
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}