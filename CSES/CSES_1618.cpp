#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ll tt;
	cin>>tt;
	nn ans=0;
	while(tt>=5)
	{
		ans+=tt/5;
		tt/=5;

	}
	cout<<ans<<"\n";


}