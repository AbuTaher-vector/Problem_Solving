#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
const nn  n=1e6;
dd arr[n];
int main()
{
     nn tt;
     cin>>tt;
     for(nn i=1;i<=n;i++) arr[i]=arr[i-1]+log10(i);
     for(nn i=1;i<=tt;i++)
     {
          ll x,b;
          cin>>x>>b;
          ll a=((arr[x])/log10(b))+1;
          cout<<"Case "<<i<<": "<<a<<nl;
     }
}