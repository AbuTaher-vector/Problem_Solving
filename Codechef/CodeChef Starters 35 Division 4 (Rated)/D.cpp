#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll n,k;
     cin>>n>>k;
     if(k==0)
     {
          if(n%4==0) cout<<"Off"<<nl;
          else cout<<"On"<<nl;
     }
     else
     {
          if(n%4==0) cout<<"On"<<nl;
          else cout<<"Ambiguous"<<nl;
     }
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
}