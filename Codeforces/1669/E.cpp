#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll n;
     ss s;
     cin>>n;
     map<ss,nn>mp;
     while(n--)
     {
          cin>>s;
          mp[s]++;
     }
     vector<pair<ss,ll>>v(mp.begin(),mp.end());
     ll cnt=0;
     for(nn i=0;i<v.size();i++)
     {
          ll cntt=0;
          ss a=v[i].first;
          for(nn j=i+1;j<v.size();j++)
          {
                ss  b=v[j].first;
                if(a[0]!=b[0]) cntt++;
                if(a[1]!=b[1]) cntt++;
                if(cntt==1) 
                    {
                         cnt+=((v[i].second)*(v[j].second));
                    }
                cntt=0;

          }
     }
     cout<<cnt<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}