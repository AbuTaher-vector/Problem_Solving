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
   ss a=s;
   reverse(a.begin(),a.end());
   nn cnt=0,k=s.size();
   for(nn i=0;i<s.size();i++) if(a[i]!=s[i]) cnt++;

      if(cnt==2) cout<<"YES"<<nl;
      else
      {
         if(cnt==0 && k&1) cout<<"YES"<<nl;
         else cout<<"No"<<nl;
      }

}
