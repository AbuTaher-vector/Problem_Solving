#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
  nn n,k;
  cin>>n>>k;
  map<nn,nn>mp;
  vector<nn>v[n+1];
  vector<nn>v1;
  nn x;
  for(nn i=0;i<n;i++)
  {
       cin>>x;
       mp[x]++;
       v[x].push_back(i);
  }
  nn ans[n+1]={0};
  for(auto x : mp)
  {
      nn a = x.first;
      nn b = x.second;
       nn colour=1;
      if(b>=k)
      {
         for(nn i=0;i<k;i++)
         {
            nn pos = v[a][i];
            ans[pos]=colour++;
         }
      }
      else for(nn i=0;i<v[a].size();i++) v1.push_back(v[a][i]);
      
  }
  nn w = v1.size();
  w%=k;
  nn colour=1;
  for(nn i=0;i<v1.size()-w;i++) 
  {
             ans[v1[i]]=colour++;
             if(colour>k) colour=1;
  }
  for(nn i=0;i<n;i++) cout<<ans[i]<<" ";
   cout<<endl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}