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
      
      if(x==0 && y==0) break;
      if(x>y) swap(x,y);
       nn rem=0,carry=0;
      while(x)
      {
          nn k = (x%10+y%10+carry)/10;
          carry=k;
          rem+=k;
          x/=10,y/=10;
      }
  
     if(rem==0) cout<<"No carry operation."<<"\n";
     else if(rem==1) cout<<rem<<" carry operation."<<"\n";
     else cout<<rem<<" carry operations."<<"\n";


    }

}