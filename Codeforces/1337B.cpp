#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn x,n,m,y=0,z=0;
    cin>>x>>n>>m;
    while(n--)
    {
      if(x<=20) break;
      x/=2;
      x+=10;
    }
    x-=(m*10);
   if(x<=0) cout<<"YES"<<nl;
   else cout<<"NO"<<nl;

}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}