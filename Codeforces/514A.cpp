#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
     ss s;
     cin>>s;
     if(s[0]=='9') cout<<9;
     else 
     {
          nn a=9,b=s[0]-'0';
          char k=(a-b)+'0';
          if(s[0]<=k) cout<<s[0];
          else cout<<k;
     }
     for(nn i=1;i<s.size();i++)
     {
          nn a=9,b=s[i]-'0';
          char k=(a-b)+'0';
          if(s[i]<=k) cout<<s[i];
          else cout<<k;

     }
     cout<<nl;
     
    
}