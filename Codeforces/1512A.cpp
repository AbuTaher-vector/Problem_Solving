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
	nn k;
	nn arr[1000]={0};
	nn ar[x+1];
	for(nn i=0;i<x;i++)
	{
		cin>>ar[i];
		arr[ar[i]]++;
	}
	for(nn i=0;i<=101;i++)
	{
		if(arr[i]==1){
			k=i;
			break;
		}
	}
	for(nn i=0;i<x;i++)
	{
       if(ar[i]==k) cout<<i+1<<"\n";
		
	}
 
}
int main()
{
 
	nn tt;
	cin>>tt;
	while(tt--)
	{
		code();
	}
	
}