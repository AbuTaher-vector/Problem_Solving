#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   nn n;
   cin>>n;
   nn x,ans=0,mx=0;
   for(nn i=1;i<=n;i++)
   {
      cin>>x;
      mx=max(mx,x);
      if(mx==i) ans++;
   }
   cout<<ans<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}