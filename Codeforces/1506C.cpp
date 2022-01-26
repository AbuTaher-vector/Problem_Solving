#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   ss a,b;
   cin>>a>>b;
   nn x=a.size(),y=b.size();
   nn ans=0;
   for(nn i=0;i<x;i++)
   {
      for(nn j=i;j<x;j++)
      {
         if(b.find(a.substr(i,j-i+1))!=-1) ans=max(ans,j-i+1);
      }
   }
   cout<<x+y-2*ans<<nl;
 
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
   
}