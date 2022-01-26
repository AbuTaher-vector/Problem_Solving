#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn n;
  cin>>n;
  nn arr[]={4,7,44,77,47,74,444,447,474,744,477,747,774,777};
  nn x=sizeof(arr)/arr[0];
  for(nn i=0;i<x;i++)
  {
    if(n%arr[i]==0)
    {
        cout<<"YES"<<nl;
        return 0;
    }
  }
  cout<<"NO"<<nl;
  
    
}