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
	nn arr[x+1];
	for(nn i=0;i<x;i++) cin>>arr[i];
		for(nn i=0;i<x-1;i++)
		{
			nn k=abs(arr[i]-arr[i+1]);
			if(k%2)
			{
				cout<<"NO\n";
				return 0;
			}

		}
		cout<<"YES\n";
		return 0;

}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--)
		code();
	

	

}