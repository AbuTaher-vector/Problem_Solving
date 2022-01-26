#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn t;
	cin>>t;
	nn arr[t+1],ar[t+1];
	arr[0]=0,ar[0]=0;
	for(nn i=1;i<t;i++)
	{
		nn x;
		cin>>x;
		arr[i]=arr[i-1]+x;
		ar[i]=arr[i];
	}
	sort(arr,arr+t);
	for(nn i=0;i<t-1;i++)
	{
		if(arr[i]+1!=arr[i+1])
		{
			cout<<-1<<"\n";
			return 0;
		}
	}
	nn k=1-arr[0];
	for(nn i=0;i<t;i++) cout<<ar[i]+k<<" ";
		cout<<"\n";



}