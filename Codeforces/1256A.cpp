#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll a,b,n,s;
     cin>>a>>b>>n>>s;
     ll k=a*n;
     if(k<=s)
     {
          s-=k;
          if(s<=b) cout<<"YES"<<nl;
          else cout<<"NO"<<nl;
     }
     else
     {
          ll x=s%n;
          if(x<=b) cout<<"YES"<<nl;
          else cout<<"NO"<<nl;
     }


}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}