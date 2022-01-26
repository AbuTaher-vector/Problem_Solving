#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn n,k;
     cin>>n>>k;
     for(nn i=1;i<=n;i++)
     {
     	for(nn j=1;j<=n;j++)
     	{
     		if(i==j) cout<<k<<" ";
     		else cout<<0<<" ";
     	}
     	cout<<"\n";
     }


	
}