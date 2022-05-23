#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
void code()
{
   nn a,b;
   cin>>a;
   vector<ll>v(a);
   for(nn i=0;i<a;i++) cin>>v[i];
       cin>>b;
     ll x,sum=0;
     while(b--)
     {
       cin>>x;
       sum+=x;
     }
     sum=sum%a;
     cout<<v[sum]<<nl;

  
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
      
}