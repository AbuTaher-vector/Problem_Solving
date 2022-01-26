#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n" 
int main()
{
      nn n;
      cin>>n;
      nn arr[n+1];
      map<nn,nn>mp;
      for(nn i=0;i<n;i++)
      {
            cin>>arr[i];
            mp[arr[i]]++;
 
      } 
      vector<pair<nn,nn>>v(mp.begin(),mp.end());
      for(nn i=0;i<v.size();i++)
      {
            nn k=v[i].first,flag=1;
            for(nn j=0;j<v.size();j++)
            {
                  nn w=v[j].first;
                  if(w%k!=0) 
                        {
                              flag=0;
                              break; 
                       } 
 
            }
            if(flag)
            {
                  cout<<k<<nl;
                  return 0;
            }
      }
      cout<<-1<<nl;
 
 
}