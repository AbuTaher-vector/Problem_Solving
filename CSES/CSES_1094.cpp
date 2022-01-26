#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
  
  nn tt;
  cin>>tt;
  nn arr[tt+1];
  for(nn i=0;i<tt;i++) cin>>arr[i];
    ll cnt=0;
    for(nn i=0;i<tt-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        nn k=arr[i]-arr[i+1];
        cnt+=k;
        arr[i+1]+=k;
      }
    }
  
     cout<<cnt<<"\n";
    
}