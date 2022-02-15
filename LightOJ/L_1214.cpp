#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{  
     nn tt;
     cin>>tt;
     for(nn i=1;i<=tt;i++)
     {
          ss s;
          ll x;
          cin>>s>>x;
          if(s[0]=='-') s.erase(0,1);
          if(x<0) x=abs(x);
          ll a=0;
          for(nn j=0;j<s.size();j++)
          {
               a=(a%x)*10+(s[j]-'0');
               a%=x;
          }
         cout<<"Case "<<i<<": ";
         if(a) cout<<"not divisible"<<nl;
         else cout<<"divisible"<<nl;
     }
        
}