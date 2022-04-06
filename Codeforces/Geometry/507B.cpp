#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{

  dd r,x,y,x2,y2;
  cin>>r>>x>>y>>x2>>y2;
  dd a=(x-x2)*(x-x2);
  dd b=(y-y2)*(y-y2);
  dd n=sqrt(a+b);
  cout<<ceil(n/(r*2))<<nl;       
}