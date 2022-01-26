#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
ll mx(ll n,ll m)
{
     m--;
     n-=m;
     n=(n*(n-1))/2;
     return n;

}
ll mn(ll n,ll m)
{
    ll k=n/m;
    ll w=n%m;
    ll a=k+1;
    ll ans=(a*(a-1)/2)*w;
    m-=w;
    ans+=(k*(k-1)/2)*m;
    return ans;



}
int main()
{
   ll n,m;
   cin>>n>>m;
   ll maximum=mx(n,m);
   ll minimum=mn(n,m);
   cout<<minimum<<" "<<maximum<<nl;
}