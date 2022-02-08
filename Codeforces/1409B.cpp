#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
     ll w=n,q=a,r=b;
     ll c=a-x;
     if(c<=w) a-=c,w-=c;
     else a-=w,w=0;
     c=b-y;
     if(c<=w) b-=c,w-=c;
     else b-=w,w=0;

      c=r-y;
     if(c<=n) r-=c,n-=c;
     else r-=n,n=0;
     c=q-x;
     if(c<=n) q-=c,n-=c;
     else q-=n,n=0;

     cout<<min(a*b,q*r)<<nl;
     
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();

}