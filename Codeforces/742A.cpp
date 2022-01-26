#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn n;
	cin>>n;
	if(n==0)
	{
		cout<<1<<"\n";
		return 0;
	}
	nn k=n%4;
	if(k==0) cout<<6;
	else if(k==1) cout<<8;
	else if(k==2) cout<<4;
	else if(k==3) cout<<2;
	cout<<"\n";
	

	

}