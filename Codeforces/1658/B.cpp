#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll n;
     cin>>n;
     if(n&1) cout<<0<<nl;
     else
     {
        ll k=n/2;

         ll ans = 1;
         for (int i = 2; i <= k; i++) ans=(ans*i)%998244353;
        for (int i = 2; i <= k; i++) ans=(ans*i)%998244353;
         cout<<ans<<nl;

     }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}