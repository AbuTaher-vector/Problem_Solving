#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   ss a,b,c;
   cin>>a>>b>>c;
   for(nn i=0;i<c.size();i++)
   {
     if(isdigit(c[i])==false) 
      {
         char x=c[i];
         x=tolower(x);
         nn pos=a.find(x);
         if(c[i]==toupper(c[i])) c[i]=toupper(b[pos]);
         else c[i]=tolower(b[pos]);
      }
   }
   cout<<c<<nl;
}