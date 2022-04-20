#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    ll x,y,ans=0;
    cin>>x>>y;
    vector<ll>v(x);
    for(nn i=0;i<x;i++) cin>>v[i];
        ll time=v[0];
      for(nn i=1;i<x;i++) time=min(time,v[i]);
        ans=y/time;
       if(y%time!=0) ans++;
       cout<<max(x,ans)<<nl;


}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
}