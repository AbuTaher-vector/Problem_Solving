#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn n,k;
	cin>>n>>k;
	nn arr[n+1];
	for(nn i=0;i<n;i++) cin>>arr[i];
		for(nn i=0;i<n-1;i++)
		{
			nn c=min(arr[i],k);
			arr[i]-=c;
			arr[n-1]+=c;
			k-=c;

		}
		for(nn i=0;i<n;i++) cout<<arr[i]<<" ";
			cout<<"\n";
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
  
}