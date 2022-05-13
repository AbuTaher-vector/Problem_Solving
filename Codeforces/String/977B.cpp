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
int cmp(pair<ss,nn>p1,pair<ss,nn>p2)
{
     if(p1.second>p2.second) return 1;
     else return 0;
}
int main()
{
     setup();
      nn n;
      cin>>n;
      ss s;
      cin>>s;
      map<ss,nn>mp;
      for(nn i=0;i<n-1;i++)
      {
          ss x;
          x.push_back(s[i]);
          x.push_back(s[i+1]);
          mp[x]++;
      }
      vector<pair<ss,nn>>v(mp.begin(),mp.end());
      sort(v.begin(),v.end(),cmp);
     cout<<v[0].first<<nl;
}