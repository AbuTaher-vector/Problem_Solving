#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
      ll n;
      cin>>n;
      ll x;
      map<ll,ll>mp;
      while(n--)
      {
        cin>>x;
        mp[x]++;
      }
      vector<pair<ll,ll>>v(mp.begin(),mp.end());
      if(v.size()==1)
      {
        ll k=v.front().second;
        k--;
         cout<<0<<" "<<(k*(k+1))/2<<nl;
      }
     else  cout<<(v.back().first-v.front().first)<<" "<<(v.back().second*v.front().second);
}