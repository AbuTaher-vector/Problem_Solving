#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   ll a,b,c;
   cin>>a>>b>>c;
   ll x=min(a,b),y=max(a,b);
   c+=y;
   if(x*2<=c) cout<<x<<nl;
   else
   {
     ll w=x*2-c;
      ll k=w/3;
     if(w%3!=0) k++;
       cout<<x-k<<nl;
    }
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}