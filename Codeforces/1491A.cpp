#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn n,q;
	cin>>n>>q;
	nn arr[n+1];
	nn cnt=0;
	for(nn i=0;i<n;i++)
	{
		cin>>arr[i];
		cnt+=arr[i];

	} 
		while(q--)
		{
			nn t,x;
			cin>>t>>x;
			if(t==1)
			{
				if(arr[x-1]==1) cnt--;
				else cnt++;
				arr[x-1]=1-arr[x-1];
				
			}
			else
			{
				if(x<=cnt) cout<<1<<"\n";
				else cout<<0<<"\n";

			} 
		}
}