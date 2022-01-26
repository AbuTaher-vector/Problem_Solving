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
   ss s;
   cin>>n>>s;
  for(nn i=0;i<n-1;i++)
  {
    if(s[i]-s[i+1]>0)
    {
      cout<<"YES"<<nl<<i+1<<" "<<i+2<<nl;
      return 0;

    }
  }
  cout<<"NO"<<nl;

}