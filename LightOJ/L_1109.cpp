#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
bool cmp(pair<nn,nn>p1,pair<nn,nn>p2)
{
     if(p1.first<p2.first) return 1;
     else if(p1.first>p2.first) return 0;
     if(p1.second>p2.second) return 1;
     return 0;

}
int div(nn n)
{
     nn cnt=0;
     for(nn i=1;i<=sqrt(n);i++)
     {
          if(n%i==0) 
               {
                    cnt++;
                    if(i!=n/i) cnt++;
               }
          
     }
     return cnt;
}
int main()
{
    vector<nn>v(1000);
     vector<pair<nn,nn>>pr;
      for(nn i=1;i<=1000;i++)
      {
          nn x=div(i);
          pr.push_back(make_pair(x,i));
      }
      sort(pr.begin(),pr.end(),cmp);
      nn index=1;
      for(auto x:pr)
      {
          v[index]=x.second;
          index++;
      }
      nn tt;
      cin>>tt;
      for(nn i=1;i<=tt;i++)
      {
          nn a;
          cin>>a;
          cout<<"Case "<<i<<": "<<v[a]<<nl;
      }

}