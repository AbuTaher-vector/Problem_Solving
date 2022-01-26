#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
	nn n,k;
	cin>>n>>k;
	vector<nn>v(n);
	for(nn i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
	if(k==0 && v[0]>1)
	{
		cout<<v[0]-1<<nl;
		return 0;
	}
	if(k==0)
	{
		cout<<-1<<nl;
		return 0;
	}
	if(k==n)
	{
		cout<<v[k-1]<<nl;
		return 0;
	}
	if(v[k]==v[k-1])
	{
		cout<<-1<<nl;
		return 0;
	}
		cout<<v[k-1]<<nl;
	
	
}