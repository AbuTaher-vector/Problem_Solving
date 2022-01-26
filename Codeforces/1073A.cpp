#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn t;
   ss s;
   cin>>t>>s;
   for(nn i=0;i<t-1;i++)
   {
      if(s[i]!=s[i+1])
      {

         cout<<"YES"<<nl<<s[i]<<s[i+1]<<nl;
          return 0;
           
      }
   }
   cout<<"NO"<<nl;
}