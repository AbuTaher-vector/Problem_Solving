#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   ll n,x;
   cin>>n>>x;
   if(x%3==0) cout<<"YES"<<nl<<x/3<<" "<<0<<" "<<n-x/3<<nl;
   else
   {
        nn k=3-x%3;
        nn l=x/3;
        if(l+1+k<=n) cout<<"YES"<<nl<<l+1<<" "<<k<<" "<<n-(l+1+k)<<nl;
        else cout<<"NO"<<nl;
   }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}