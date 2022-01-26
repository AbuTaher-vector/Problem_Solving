#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   ll n;
   cin>>n;
   ll arr[n+1];
   ll sum=0;
   for(ll i=0;i<n;i++)
   {
      cin>>arr[i];
      sum+=arr[i];
   }
   ll x=sum%n;
   n-=x;
   cout<<x*n<<"\n";
 
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}