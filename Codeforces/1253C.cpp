#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
     ll k;
     cin>>k;
     ll ans=0;
     ll a=k/2;
     while(k>1)
     {
         ans+=((k*2)+((k-2)*2))*a;
         k-=2;
         a--;
     }
     cout<<ans<<nl;
      
} 
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
 
}