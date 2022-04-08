#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int cmp(pair<nn,nn>p1,pair<nn,nn>p2)
{
     if(p1.second>p2.second) return 1;
     else return 0;
}
int code()
{
     nn n,x;
     cin>>n;
     nn k=n;
     map<nn,nn>mp;
     while(n--)
     {
         cin>>x;
         mp[x]++;
     }
     vector<pair<nn,nn>>v(mp.begin(),mp.end());
     sort(v.begin(),v.end(),cmp);
     if(v.size()==1)
     {
        cout<<0<<nl;
        return 0;
     }
     nn t=v[0].second;
     nn ans=1;
     while(t<k)
     {
         if(t+t<=k) ans+=t;
         else ans+=k-t;
         t*=2;
         if(t<k) ans++;

     }
     cout<<ans<<nl;




return 0;

      
}
int main()
{
  
     nn n;
     cin>>n;
     while(n--) code();
}