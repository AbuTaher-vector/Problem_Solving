#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

int main()
{
	nn n,t;
	cin>>n>>t;
	nn arr[n+1];
	for(nn i=0;i<n-1;i++) cin>>arr[i];
		nn i=1;
		while(1)
		{
			nn k=arr[i-1];
			i+=k;
			if(i==t)
			{
				cout<<"YES\n";
				return 0;
			}
			else if(t<i)
			{
				cout<<"NO\n";
				return 0;
			}
		}

}