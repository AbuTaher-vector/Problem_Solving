#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn arr[6][6];
     nn ans=INT_MIN;
     for(nn i=0;i<6;i++)
     {
          for(nn j=0;j<6;j++)
          {
               cin>>arr[i][j];
          }
     }
     for(nn i=0;i<4;i++)
     {
          for(nn j=0;j<4;j++)
          {
               nn sum=0;
               sum+=arr[i][j]+arr[i][j+1]+arr[i][j+2];
               sum+=arr[i+1][j+1];
               sum+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                ans=max(ans,sum);
          }
     }
     cout<<ans<<nl;
}