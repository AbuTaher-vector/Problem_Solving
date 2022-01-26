#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
     nn n;
     cin>>n;
     nn arr[n+1][6];
     for(nn i=0;i<n;i++)
     {
      for(nn j=0;j<5;j++) cin>>arr[i][j];
     }
   nn target=0;
   for(nn i=1;i<n;i++)
   {
       nn cnt=0;
    for(nn j=0;j<5;j++)
    {
      if(arr[i][j]<arr[target][j]) cnt++;

    }
    if(cnt>=3) target=i;
   }
   for(nn i=0;i<n;i++)
   {
       nn cnt=0;
     for(nn j=0;j<5;j++)
     {
         if(arr[i][j]<arr[target][j]) cnt++;

     }
    if(cnt>=3)
    {
      cout<<-1<<"\n";
      return 0;
    }
   }
   cout<<target+1<<"\n";
   return 0;
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}
