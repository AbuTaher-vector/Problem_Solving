#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn a,b;
   cin>>a>>b;
   nn x=(a+b)/2;
   nn y=a-x;
   if((x+y)!=a || abs(x-y)!=b || x<0 || y<0) cout<<"impossible"<<nl;
   else cout<<max(x,y)<<" "<<min(x,y)<<nl;
}
int main()
{
   nn tt;
   cin>>tt;
    while(tt--) code();
}