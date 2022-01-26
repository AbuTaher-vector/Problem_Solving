#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
ll actualpower=1e18+7;
ll findthepower(ll n,ll a)
{
    ll k = n;
    ll count=0;
    while(k)
    {
        count+=(k/a);
        k/=a;
    }
    return count;

}
int main()
{
    ll n,b;
    cin>>n>>b;
    vector<pair<ll,ll>>v;
    for(ll i=2;i*i<=b;i++)
    {
        if(b%i==0)
        {
            ll power=0;
            while(b%i==0)
            {
                b/=i;
                power++;
            }

           v.push_back(make_pair(i,power));
        }
    }
    if(b!=1) v.push_back(make_pair(b,1));
    for(auto x : v)
    {
        ll ex=findthepower(n,x.first);
        actualpower=min(ex/x.second,actualpower);
    }
    cout<<actualpower<<"\n" ;
}