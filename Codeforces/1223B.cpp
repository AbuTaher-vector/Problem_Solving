#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
   ss a,b;
   cin>>a>>b;
   for(nn i=0;i<a.size();i++)
   {
      nn pos=b.find(a[i]);
      if(pos!=-1)
      {
         cout<<"YES"<<nl;
         return 0;
      }
   }
   cout<<"NO"<<nl;
   return 0;
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}
