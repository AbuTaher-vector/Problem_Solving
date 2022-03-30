#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   nn n,m;
   cin>>n>>m;
   nn ans=n*2;
   cout<<ans-min(n,m)<<nl;

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}