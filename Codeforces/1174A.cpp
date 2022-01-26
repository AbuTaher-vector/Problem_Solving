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
	t*=2;
	nn arr[t+1];
	for(nn i=0;i<t;i++) cin>>arr[i];
		sort(arr,arr+t);
	nn sum=0,sum1=0;
	for(nn i=0;i<t/2;i++) sum+=arr[i];
		for(nn i=t/2;i<t;i++) sum1+=arr[i];
			if(sum==sum1) cout<<-1<<"\n";
		   else
		   {
		   	for(nn i=0;i<t;i++) cout<<arr[i]<<" ";
		   		cout<<"\n";
		   }

}