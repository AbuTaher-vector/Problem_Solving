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
  nn arr[tt+1]={0};
  for(nn i=1;i<tt;i++)
  {
    nn x;
    cin>>x;
    arr[x]++;
  }
  for(nn i=1;i<=tt;i++)
  {
    if(arr[i]==0)
    {
      cout<<i<<"\n";
      break;
    }
  }
  
     
    
}