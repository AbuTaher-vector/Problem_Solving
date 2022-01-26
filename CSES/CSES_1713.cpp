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
    nn x;
    cin>>x;
    nn cnt=0;
    for(nn i=1;i<=sqrt(x);i++)
    {
      if(x%i==0)
      {
        if(i==x/i) cnt++;
        else cnt+=2;
      }
    }
    cout<<cnt<<"\n";
  }
  
    
}