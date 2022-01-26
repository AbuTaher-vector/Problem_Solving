#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
  ll n,b,d;
  cin>>n>>b>>d;
  ll x,sum=0,cnt=0;
  while(n--)
    {
      cin>>x;
      if(x<=b) sum+=x;
      if(sum>d) cnt++,sum=0;
    }
    cout<<cnt<<"\n";
}