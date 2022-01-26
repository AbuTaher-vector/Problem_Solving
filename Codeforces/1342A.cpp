#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
     ll x,y,a,b;
     cin>>a>>b>>x>>y;
     if(a>=0 || b>=0)
     {
           ll k=(a+b)*x;
           ll w=min(a,b)*y+(max(a,b)-min(a,b))*x;
           cout<<min(k,w)<<nl;
           return 0;
     }
     return 0;
} 
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
 
}