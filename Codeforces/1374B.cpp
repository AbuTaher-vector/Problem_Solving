#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	ll x;
	cin>>x;
	nn cnt=0;
		while(1)
		{
			if(x==1)
			{
				cout<<cnt<<"\n";
				return 0;
			}
			else if(x%6==0)
			{
				cnt++;
				x/=6;
			}
			else if(x%6!=0)
				{
					x*=2;
					if(x%6!=0)
					{
						cout<<-1<<"\n";
						return 0;
					}
					cnt++;
				}
		}
		return 0;
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}