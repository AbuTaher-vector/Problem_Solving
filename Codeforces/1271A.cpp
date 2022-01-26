#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

      ll a,b,c,d,e,f;
      cin>>a>>b>>c>>d>>e>>f;
      if(f>e)
      {
          nn k=min(b,min(c,d));
          nn cost=k*f;
          d-=k;
          if(d>0)
          {
              nn x=min(a,d);
              cost+=x*e;
          }
          cout<<cost<<endl;
      }
      else{
          nn k=min(a,d);
          nn cost=k*e;
          d-=k;
          if(d>0)
          {
              nn x=min(b,min(c,d));
              cost+=x*f;
          }
          cout<<cost<<endl;
      }


}
