#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn arr[1000001]={0};
int main()
{
	nn tt;
	cin>>tt;
	nn mx=0;
	while(tt--)
	{
		nn x;
		cin>>x;
		arr[x]++;
		mx=max(mx,x);

	}
    for(nn i=mx;i;i--)
    {
    	nn d=0;
    	for(nn j=i;j<=mx;j+=i) d+=arr[j];
    		
    		if(d>1)
    		{
    			cout<<i<<"\n";
    			break;
    		}

    }
}