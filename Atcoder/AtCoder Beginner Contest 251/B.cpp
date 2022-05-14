#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int main()
{
     setup();
     nn n,w;
     cin>>n>>w;
     vector<nn>v(n);
     set<nn>s;
     for(nn i=0;i<n;i++)
     {
          cin>>v[i];
          if(v[i]<=w) s.insert(v[i]);
     }
     for(nn i=0;i<n-1;i++)
     {
          for(nn j=i+1;j<n;j++)
          {
               if(v[i]+v[j]<=w) s.insert(v[i]+v[j]);
          }
     }
     for(nn i=0;i<n-2;i++)
     {
          for(nn j=i+1;j<n-1;j++)
          {
               for(nn k=j+1;k<n;k++) 
               {
                    if(v[i]+v[k]+v[j]<=w) s.insert(v[i]+v[k]+v[j]);
               }
          }
     }
     cout<<s.size()<<nl;


}