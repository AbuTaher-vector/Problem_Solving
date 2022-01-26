#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn n;
   ss s;
   cin>>n>>s;
   ss g="ACTG";
   nn ans=INT_MAX;
  for(nn i=0;i<n;i++)
  {
      nn k=0,c=0;
      for(nn j=i;j<n;j++)
      {
        nn x=0,y=0;
       if(s[j]>g[k])
       {
          x=s[j]-g[k];
          y=('Z'-s[j])+(g[k]-'A')+1;
       }
       else if(s[j]<g[k])
       {
            x=g[k]-s[j];

            y=('Z'-g[k])+(s[j]-'A')+1;
       }
       c+=min(x,y);
       k++;
       if(k==4) break;
      }
      if(k==4) ans=min(ans,c);
    
  }
  cout<<ans<<nl;
}