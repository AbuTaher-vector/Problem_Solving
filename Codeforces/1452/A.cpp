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
      nn a,b;
      cin>>a>>b;
      if(a==b) cout<<a+b<<endl;
      else{
        cout<<2*max(a,b)-1<<endl;
      }
  }


}