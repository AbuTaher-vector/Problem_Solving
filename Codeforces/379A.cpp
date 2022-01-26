#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

int main()
{
	nn a,b;
	cin>>a>>b;
	nn cnt=a;
	while(1)
	{
		nn k=a;
		a/=b;
		cnt+=a;
		a+=k%b;
		if(b>a)
		{
			cout<<cnt<<"\n";
			return 0;
		}
	}

}