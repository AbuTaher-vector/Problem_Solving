#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
bool cmp(pair<ss,nn>p1,pair<ss,nn>p2)
{
   return p2.second<p1.second;
}
nn main()
{
   nn n;
   ss s;
   cin>>n;
   map<ss,nn>mp;
   while(n--)
   {
      cin>>s;
      mp[s]++;
   }
   vector<pair<ss,nn>>v(mp.begin(),mp.end());
   sort(v.begin(),v.end(),cmp);
  cout<<v[0].first<<nl;
}