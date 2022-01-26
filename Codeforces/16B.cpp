#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn n,m;
    cin>>n>>m;
    vector<pair<nn,nn>>v;
    nn a,b;
    while(m--)
    {
        cin>>a>>b;
       v.push_back(make_pair(b,a));
        
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    nn ans=0,i=0;
    for(i=0;i<v.size();i++)
    {
      if(v[i].second<=n)
      {
         ans+=(v[i].first*v[i].second);
         n-=v[i].second;
      }
      else break;

    }
    if(n!=0 && i!=v.size()) ans+=(v[i].first*n);
    cout<<ans<<"\n";
}