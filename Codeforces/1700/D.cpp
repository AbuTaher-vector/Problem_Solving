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
int main()
{
     setup();

     nn n;
     cin>>n;
     vector<ll>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
      for(nn i=1;i<n;i++) v[i]=v[i-1]+v[i];
         ll mn=INT_MIN;
      for(nn i=0;i<n;i++)
      {
            ll k=(v[i]/(i+1));
            if(v[i]%(i+1)!=0) k++;
            mn=max(mn,k);
      }
      ll tt,q;
      cin>>tt;
      while(tt--)
      {
         cin>>q;
         if(q<mn) cout<<-1<<nl;
         else
         {
            ll ans=v[n-1]/q;
            if(v[n-1]%q!=0) ans++;
            cout<<ans<<nl;

         }
      }




}