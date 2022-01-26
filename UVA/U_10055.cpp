#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    ll x,y;
    while(scanf("%lld %lld",&x,&y)==2)
    {
      if(x>y) swap(x,y);
      cout<<y-x<<"\n";
    }

}