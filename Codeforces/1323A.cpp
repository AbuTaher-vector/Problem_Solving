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
  while(tt--)
  {
      nn x,pos,flag=0;
      cin>>x;
      nn arr[x+1];
      for(nn i=0;i<x;i++)
      {
          cin>>arr[i];
          if(arr[i]%2==0)
          {
              flag=1;
              pos=i;
          }
      }
     if(flag==1) cout<<1<<endl<<pos+1<<endl;
     else if(x!=1 && flag==0) cout<<2<<endl<<1<<" "<<2<<endl;
     else cout<<-1<<endl;

  }
}
