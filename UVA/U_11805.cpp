#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn j=0;
void code()
{
  nn n,k,p;
  cin>>n>>k>>p;
  while(p--)
  {
    k++;
    if(k>n) k=1;
  }
  j++;
  cout<<"Case "<<j<<": "<<k<<"\n";
}
int main()
{

  nn tt;
  cin>>tt;
  while(tt--) code();

     
    
}