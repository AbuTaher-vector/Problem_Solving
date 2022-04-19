#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     
     ll n,m;
     cin>>n>>m;
     vector<nn>v;
     nn x;
     for(nn i=0;i<n;i++)
     {
          cin>>x;
          v.push_back(x);

     }
     x=v[0];
     sort(v.begin(),v.end());
     v.push_back(x);
     ll ans=0;
     for(nn i=0;i<v.size()-1;i++)
     {
          ans+=max(v[i],v[i+1]);

     }
     ans+=n;
     if(ans<=m) cout<<"YES"<<nl;
     else cout<<"NO"<<nl;

     

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