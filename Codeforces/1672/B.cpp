#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
   ss s;
   cin>>s;
   if(s.size()<2)
   {
      cout<<"NO"<<nl;
      return 0;

   } 
   nn a=0,b=0;
   for(nn i=0;i<s.size();i++)
   {
      if(s[i]=='A') a++;
      else b++;
      if(b>a)
      {
         cout<<"NO"<<nl;
         return 0;
      }
   }
   if(s[0]=='B' || s.back()=='A')
   {
      cout<<"NO"<<nl;
      return 0;
   }
   cout<<"YES"<<nl;
   return 0;

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