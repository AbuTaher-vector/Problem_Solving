#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
     ll x,n;
     cin>>x>>n;
     ll k=n/4;
     k*=4;
     for(ll i=k+1;i<=n;i++)
     {
          if(abs(x%2)==1) x+=i;
          else x-=i;
     }
     cout<<x<<nl;
 
 
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
   
}