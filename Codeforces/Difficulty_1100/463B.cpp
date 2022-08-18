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
int main()
{
       setup();
       
      int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++) cin>>v[i];
       int e=0,ans=v[0];
       for(int i=1;i<n;i++)
       {
              if(v[i]<=v[i-1])  e+=v[i-1]-v[i];
              else
              {
                      int k=v[i]-v[i-1];

                      if(k>e) 
                      {
                          ans+=k-e;
                          e=0;
                      }
                      else e-=k;
              }
       }
       cout<<ans<<'\n';
}