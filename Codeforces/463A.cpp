#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	nn n , s;
	cin>>n>>s;
	nn mx=0,flag=0;
	while(n--)
	{
		nn x,y;
		cin>>x>>y;
		if(x==s && y==0)
		{
			flag=1;
		}
		else if(x<s) 
		{

			nn k=100-y;
			if(k==100) k=0;
			mx=max(mx,k);
			flag=1;

		} 
		
	}

    if(flag) cout<<mx<<"\n";
    else cout<<-1<<"\n";
}