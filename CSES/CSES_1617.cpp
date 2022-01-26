#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn k=1000000007;
int main()
{
	
	nn t;
	cin>>t;
	nn ans=1;
	for(nn i=1;i<=t;i++)
	{
		ans*=2;
		ans%=k;

	}
	cout<<ans<<"\n";


}