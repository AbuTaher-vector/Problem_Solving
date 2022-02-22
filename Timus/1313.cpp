#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
 nn arr[1000][1000];
int main()
{
    nn n;
    cin>>n;
    for(nn i=0;i<n;i++)
    {
      for(nn j=0;j<n;j++) cin>>arr[i][j];
    }
     
      for(nn i=0;i<n;i++)
      {
          for(nn j=0;j<=i;j++) cout<<arr[i-j][j]<<" ";
         
 
      }
     for(nn i=n-1;i>=1;i--)
     {
          nn k=i,x=n-1,y=n-i;
          while(k--)
          {
               cout<<arr[x][y]<<" ";
               x--,y++;
          }
     }
     cout<<nl;
}