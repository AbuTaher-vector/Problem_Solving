#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn x,y;
  ss a,b;
  cin>>x>>y>>a>>b;
  nn ans=INT_MAX;
  vector<pair<nn,nn>>p;
  for(nn i=0;i<b.size();i++)
  {
    nn k=0,cnt=0;
    vector<nn>v;
    for(nn j=i;j<b.size();j++)
    {
      if(b[j]!=a[k])
      {
        v.push_back(k+1);
        cnt++;
      }
      k++;
      if(k==x) break;
    }
    if(k==x)
    {
        ans=min(ans,cnt);
        for(nn q=0;q<v.size();q++) p.push_back(make_pair(cnt,v[q]));

    }
  }
  nn t=0;
  cout<<ans<<nl;
  for(nn i=0;i<p.size();i++)
  {
    if(p[i].first==ans) 
      {
        cout<<p[i].second<<" ";
        t++;
        if(t==ans) break;
      }
  }
    
}