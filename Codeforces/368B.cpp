#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n,m;
    cin>>n>>m;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
        map<nn,nn>mp;
    nn x;
    for(nn i=n-1;i>=0;i--)
    {
        mp[v[i]]++;
        if(mp[v[i]]==1) v[i]=1;
        else v[i]=0;
    }
    for(nn i=n-2;i>=0;i--) v[i]=v[i]+v[i+1];
        while(m--)
        {
            cin>>x;
            cout<<v[x-1]<<nl;
        }
}