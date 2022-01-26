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
     ss a,b;
     for(nn i=0;i<s.size();i++)
     {
      a+=s[i];
      if(s[i]!='a') b+=s[i];
      if(a.size()+b.size()==s.size()) break;
     }
     if(a+b==s) cout<<a<<nl;
     else cout<<":("<<nl;
}