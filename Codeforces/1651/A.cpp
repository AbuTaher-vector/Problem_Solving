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
   nn ans=1;
   while(n--) ans*=2;
   cout<<ans-1<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}