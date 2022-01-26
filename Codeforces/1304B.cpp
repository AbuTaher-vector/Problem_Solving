#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn n,m;
  cin>>n>>m;
  ss arr[n+1];
  vector<ss>x;
  vector<ss>y;
  ss ans="";
  for(nn i=0;i<n;i++) cin>>arr[i];

    for(nn i=0;i<n;i++)
    {
      ss a=arr[i];

      for(nn j=i+1;j<n;j++) 
      {
          ss b=arr[j];
          reverse(b.begin(),b.end());
          if(a==b)
          {
            x.push_back(a);
             reverse(b.begin(),b.end());
            y.push_back(b);
            arr[j]="";
            break;
          }
      }

    } 

     for(nn i=0;i<n;i++)
     {
         ss a=arr[i];
         ss b=a;
          reverse(b.begin(),b.end());
          if(a==b && a!="")
          {
             ans+=a;
             break;

          } 


     }
      for(nn i=0;i<x.size();i++)
     {
         x[i]+=ans;
         ans=x[i];
         ans+=y[i];

     }
     if(ans.size()!=0) cout<<ans.size()<<nl<<ans<<nl;
     else cout<<"0"<<nl;
      


}