#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
     ll n;
     cin>>n;
     ll arr[n+1];
     vector<ll>a;
     vector<ll>b;
     vector<ll>c;
     for(ll i=0;i<n;i++)
     {
          cin>>arr[i];
          a.push_back(arr[i]);
     } 
     sort(a.begin(),a.end());
     c.push_back(a[0]);
     for(ll i=1;i<a.size();i++)
     {
          a[0]+=a[i];
          c.push_back(a[0]);
     } 
     b.push_back(arr[0]);
     for(ll i=1;i<n;i++)
     {
          arr[0]+=arr[i];
          b.push_back(arr[0]);
     } 
    ll tt;
    cin>>tt;
    while(tt--)
    {
       ll type,l,r;
       cin>>type>>l>>r;
       if(type==2)
          {
                if(l==1) cout<<c[r-1]<<nl;
               else  cout<<c[r-1]-c[l-2]<<nl;
              
              
          }
          else 
          {
                if(l==1) cout<<b[r-1]<<nl;
               else  cout<<b[r-1]-b[l-2]<<nl;
              
          }
    }
    
}