#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code(nn a,nn b,nn c,nn d,nn t)
{
	nn x,y;
	while(t--)
	{
		cin>>x>>y;
		if(x>a && x<c && y>b && y<d) cout<<"Yes"<<nl;
		else cout<<"No"<<nl;
	}

}
int main()
{
	nn tt;
	cin>>tt;
	for(nn i=1;i<=tt;i++)
	{
		nn a,b,c,d,t;
		cin>>a>>b>>c>>d>>t;
		cout<<"Case "<<i<<":"<<nl;
		code(a,b,c,d,t);
	}
}