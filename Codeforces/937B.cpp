#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int ch(nn k,nn p)
{
	for(nn i=2;i<=sqrt(k);i++)
	{
		if(k%i==0 && i>p) return 1;
		else if(k%i==0 && i<=p) return 0;
	}
	return 0;
}
int chh(nn k,nn p)
{
	for(nn i=2;i<=sqrt(k);i++)
	{
		if(k%i==0) return 0;
	}
	return 1;
}
int main()
{
	nn p,y;
	cin>>p>>y;
	for(nn i=y;i>p;i--)
	{
		if(ch(i,p) || chh(i,p))
		{
			cout<<i<<"\n";
			return 0;		
		}
	}
	cout<<-1<<"\n";
	
}