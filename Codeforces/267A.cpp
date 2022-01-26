#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	nn a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	nn sum=0;
	while(1)
	{

		sum+=b/a;
		b%=a;
		if(b==0)
		{
			cout<<sum<<"\n";
			return 0;
		}
		if(b==1)
		{
			cout<<sum+a<<"\n";
			return 0;
		}
		if(a>b) swap(a,b);
	}
	return 0;


	

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();

}