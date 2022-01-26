#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn k;
   ss s;
   cin>>k>>s;
   map<char,nn>mp;
   for(nn i=0;i<s.size();i++)
   {
      mp[s[i]]++;
   }
   vector<pair<char,nn>>v(mp.begin(),mp.end());
   for(nn i=0;i<v.size();i++)
   {
      nn x=v[i].second;
      if(x%k!=0)
      {
         cout<<-1<<nl;
         return 0;
      }
   }
   nn w=k;
   while(w--)
    {
      for(nn i=0;i<v.size();i++)
       {
         nn t=v[i].second;
         t/=k;
         while(t--) 
         {
            cout<<v[i].first;
         }
         
       }
   }
   cout<<nl;
 
 
}
 