#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int squar(nn n)
{
	nn k=sqrt(n);
	if(k*k==n) return 1;
	else return 0;
}
void code()
{
	nn x;
	cin>>x;
	nn arr[x+1];
	nn flag=0;
	for(nn i=0;i<x;i++) cin>>arr[i];
		for(nn i=0;i<x;i++)
		{
			if(!squar(arr[i]))
			{
				flag=1;
				break;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
  
}