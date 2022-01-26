#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
   nn n;
   ss a,b;
   cin>>n>>a>>b;
   map<char,nn>a1;
    map<char,nn>b1;
   nn cnt=0;
   for(nn i=0;i<a.size();i++)
   {
      if(a[i]!=b[i])
      {
         cnt++;
         a1[a[i]]++,b1[b[i]]++;
      }
   }
   if(cnt!=2 && cnt!=0)
   {
      cout<<"No"<<nl;
      return 0;
   }
   for(auto x:a1) 
   {
      if(x.second!=2)
      {
         cout<<"No"<<nl;
         return 0;
      }
   }
   for(auto x:b1) 
   {
      if(x.second!=2)
      {
         cout<<"No"<<nl;
         return 0;
      }
   }
   cout<<"Yes"<<nl;
   return 0;
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}
