#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
	nn x;
	cin>>x;
	nn coin=0;
	while(1)
	{
		nn k=x/10;
		coin+=k*10;
		x=k+(x%10);
		if(x<10)
		{
			coin+=x;
			cout<<coin<<"\n";
			return 0;
		}

	}
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}