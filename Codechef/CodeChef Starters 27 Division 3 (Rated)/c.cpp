#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     ll a,b;
     cin>>a>>b;
     ll k=a*b/__gcd(a,b);
     cout<<k/a<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}