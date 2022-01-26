#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   nn n;
   cin>>n;
   ll arr[n+1];
   for(nn i=0;i<n;i++) cin>>arr[i];
    map<ll,ll>mp;
    for(nn i=0;i<n;i++)  mp[arr[i]-i]++;
    ll cnt=0;
    for(auto x:mp) cnt+=(x.second*(x.second-1)/2);
        cout<<cnt<<nl;


}
nn main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}