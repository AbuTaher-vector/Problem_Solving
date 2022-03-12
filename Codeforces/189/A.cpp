#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;
    for(nn i=0;i<=4000;i++)
    {
          for(nn j=0;j<=4000;j++)
          {
               if( (n-a*i-b*j)>-1 &&  (n-a*i-b*j)%c==0)
               {
                     nn k=(n-a*i-b*j)/c;
                     ans=max(ans,i+j+k);
               }
          }
    }
    cout<<ans<<nl;
}