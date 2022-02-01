#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
  ll a,b,c;
  cin>>a>>b>>c;
  nn x,y,z;
  if(a>max(c,b)) x=0;
  else x=max(c,b)-a+1;
  if(b>max(c,a)) y=0;
  else y=max(c,a)-b+1;
  if(c>max(a,b)) z=0;
  else z=max(a,b)-c+1;
  cout<<x<<" "<<y<<" "<<z<<nl;
     
    
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}