#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
void code()
{
      int n,t;
      cin>>n>>t;
      vector<long long int>v(n);
      for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
       for(int i=1;i<n;i++) v[i]+=v[i-1];
        long long int ans=0;
       for(int i=0;i<n;i++)
       {
          if(v[i]<=t) ans+=(t-v[i])/(i+1)+1;
       }
       cout<<ans<<'\n';
      

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}
