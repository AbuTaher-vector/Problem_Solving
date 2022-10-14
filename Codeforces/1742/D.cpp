#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("put.txt", "w", stdout);
     #endif
}
void code()
{
    int n;
    cin>>n;
    vector<long long int>v(n),ind(1001);
    for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            ind[v[i]]=i+1;
        }
        long long int ans=0;
      for(int i=1;i<=1000;i++)
      {
           for(int j=1;j<=1000;j++)
           {
              if(__gcd(i,j)==1 && (ind[i] && ind[j])) ans=max(ans,ind[i]+ind[j]);
           }
      }
      if(ans==0) cout<<-1<<'\n';
      else cout<<ans<<'\n';
   
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}