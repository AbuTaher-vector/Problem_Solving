#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

int main()
{
	nn n,m;
	cin>>n>>m;
	nn k=n+1;
	k/=2;
	if(m==0) cout<<1<<"\n";
	else if(n==m) cout<<0<<"\n";
	else if(m>=k) cout<<n-m<<"\n";
	else cout<<m<<"\n";

 
}