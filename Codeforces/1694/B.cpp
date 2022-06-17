#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{ 
   nn n;
   ss s;
   cin>>n>>s;
   ll ans=n;

   for(nn i=1;i<n;i++) if(s[i]!=s[i-1]) ans+=i;
      cout<<ans<<nl;
   
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
      
}