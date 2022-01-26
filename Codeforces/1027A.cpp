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
   ss s;
   cin>>n>>s;
   for(nn i=0;i<n/2;i++)
   {
      nn a=s[i];
      nn b=s[n-i-1];
      if(abs(a-b)!=0 && abs(a-b)!=2)
      {
         cout<<"NO"<<nl;
         return 0;
      }
   }
   cout<<"YES"<<nl;
   return 0;
  
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}
