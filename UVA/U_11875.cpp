#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn j=0;
void code()
{
  nn x;
  cin>>x;
  nn arr[x+1];
  for(nn i=0;i<x;i++) cin>>arr[i];
    sort(arr,arr+x);
  nn k=x/2;

  j++;
  cout<<"Case "<<j<<": "<<arr[k]<<"\n";
}
int main()
{

  nn tt;
  cin>>tt;
  while(tt--) code();

     
    
}