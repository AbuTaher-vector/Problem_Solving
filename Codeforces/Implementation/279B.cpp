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
     nn n,t;
     cin>>n>>t;
     vector<ll>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
     ll j=0,ans=INT_MIN,sum=0,cnt=0;
     for(nn i=0;i<n;i++)
     {
         if(sum+v[i]<=t)
         {
            sum+=v[i];
            cnt++;

         }
         else
         {
            sum-=v[j];
            sum+=v[i];
            j++;
         }
         ans=max(ans,cnt);

     }
     cout<<ans<<nl;
}