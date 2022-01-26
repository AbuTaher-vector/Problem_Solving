#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt,n,cnt=0;
      cin>>tt>>n;
      nn arr[n]={0};
      while(tt--)
      {
          nn x,y;
          cin>>x>>y;
          for(int i=x;i<=y;i++)
          {
              arr[i-1]++;
          }

      }
      for(int i=0;i<n;i++) if(arr[i]==0) cnt++;
     cout<<cnt<<endl;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==0) cout<<i+1<<" ";
     }
     cout<<endl;



}
