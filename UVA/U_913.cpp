#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{      
   
   nn tt;
   while(cin>>tt)
   {
   	ll x=7;
   	ll k=tt/2;
   	k--;
   	ll add=10;
   	while(k--)
   	{
   		x+=add;
   		add+=4;

   	}
     cout<<x*3-6<<"\n";
   }



}