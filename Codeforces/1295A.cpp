#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn x;
	cin>>x;
	if(x%2!=0)
	{
		cout<<7;
		x-=3;
	}
   x/=2;
   while(x--) cout<<1;
   cout<<"\n";
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}