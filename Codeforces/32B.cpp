#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
   ss s;
   cin>>s;
   for(nn i=0;i<s.size();i++)
   {
      if(s[i]=='.') cout<<0;
      else if(s[i]=='-')
      {
        if(s[i+1]=='-') cout<<2;
        else cout<<1;
        i++;
      }
   }
   cout<<nl;
   
}