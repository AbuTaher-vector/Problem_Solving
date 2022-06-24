#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

}
void code()
{
      nn n;
      cin>>n;
      vector<nn>v(n);
      for(nn i=0;i<n;i++) cin>>v[i];
      ll suff=0,ans=0,track=v[0];
      for(nn i=0;i<n-1;i++)
      {
         if(v[i]<v[i+1]) ans+=v[i+1]-v[i];
         else
         {
            ans+=v[i]-v[i+1];
            track-=v[i]-v[i+1];
         }

      }
      cout<<ans+abs(track)<<nl;
}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();

}