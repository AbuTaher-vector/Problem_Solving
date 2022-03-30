#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    nn n,k;
    cin>>n>>k;
    nn x,a=n;
    nn mx=INT_MIN;
    map<nn,nn>mp;
    while(n--)
    {
        cin>>x;
        mp[x]++;
        mx=max(mx,x);

    }
    if(k>=a-1)
    {
        cout<<mx<<nl;
        return 0;
    }

    for(auto x:mp)
    {
        if(k<x.second)
        {
            cout<<x.first<<nl;
            return 0;
        }
        k-=x.second;
        
    }
    return 0;

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}