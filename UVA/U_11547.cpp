#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll x;
     cin>>x;
     x*=567;
     x/=9;
     x+=7492;
     x*=235;
     x/=47;
     x-=498;
     cout<<abs((x/10)%10)<<nl;
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}