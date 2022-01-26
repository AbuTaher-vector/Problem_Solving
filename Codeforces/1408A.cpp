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
	vector<nn>v;
	nn a[x+1],ar[x+1],arr[x+1];
	for(nn i=0;i<x;i++) cin>>a[i];
		for(nn i=0;i<x;i++) cin>>ar[i];
			for(nn i=0;i<x;i++) cin>>arr[i];
     for(nn i=0;i<x-1;i++)
     {
     	if(a[i]==a[i+1]) a[i+1]=ar[i+1];
     }
     if(a[0]==a[x-1])
     {
     	if(a[1]!=ar[0]) a[0]=ar[0];
     	else a[0]=arr[0];
     }
     for(nn i=0;i<x;i++) cout<<a[i]<<" ";
     	cout<<"\n";
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}