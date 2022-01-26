#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{

	nn n;
	cin>>n;
	nn arr[n+1];
	for(nn i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
	nn x=arr[0];
	nn cnt=0;
	for(nn i=0;i<n;i++)
	{
		if(arr[i]>x) cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
	
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
}