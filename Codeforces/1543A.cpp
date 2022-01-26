#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
   ll a,b;
   cin>>a>>b;
   ll k=abs(a-b);
   if(k==0) cout<<"0 0\n";
   else
   {
      ll x=a%k;
      cout<<k<<" "<<min(x,abs(k-x))<<"\n";
   }
   return 0;
 
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}