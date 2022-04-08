#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 && n/i!=i && __gcd((n/i),i)==1)  v.push_back(make_pair(n/i,i));
    }
    if(v.size()==0) cout<<1<<" "<<n<<nl;
    else
    {
       sort(v.begin(),v.end());
      cout<<v[0].second<<" "<<v[0].first<<nl;

    }
   
}