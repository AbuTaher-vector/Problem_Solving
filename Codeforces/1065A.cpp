#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
  nn tt;
  cin>>tt;
  while(tt--)
  {
      ll s,a,b,c;
      cin>>s>>a>>b>>c;
      s/=c;
      ll k=s/a;
      k*=b;
      s+=k;
      cout<<s<<endl;
  }



}
