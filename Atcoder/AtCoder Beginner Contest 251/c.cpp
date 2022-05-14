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
     nn n,x;
     cin>>n;
     ss s;
     vector<pair<ss,nn>>v;
     map<ss,nn>mp;
     while(n--)
     {
          cin>>s>>x;
          v.push_back(make_pair(s,x));

     }
     nn ind,mx=INT_MIN;
     for(nn i=0;i<v.size();i++)
     {
          ss a=v[i].first;
          mp[a]++;
          if(mp[a]==1)
          {
               if(v[i].second>mx)
               {
                    ind=i;
                    mx=max(mx,v[i].second);
               }
          }

     }
     cout<<++ind<<nl;

     



}