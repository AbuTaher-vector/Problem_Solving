#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
	nn n;
	cin>>n;
	nn k=abs(n);
	if(n==0)
	{
		cout<<1<<nl;
		return 0;
	}
	k=(k*(k+1))/2;
	if(n<0) k=(k-1)*-1;
	cout<<k<<nl;
	
}