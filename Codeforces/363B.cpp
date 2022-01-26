#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n,k,sum=0;
    cin>>n>>k;
    vector<nn>v(n);
    map<nn,nn>mp;
    for(nn i=0;i<n;i++) cin>>v[i];
    for(nn i=0;i<k;i++) sum+=v[i];
    mp[sum]=0;
    for(nn i=1;i<=n-k;i++)
    {
        sum+=v[i+k-1];
        sum-=v[i-1];
        mp[sum]=i;

    }
    vector<pair<nn,nn>>p(mp.begin(),mp.end());
    cout<<1+p[0].second<<nl;
}