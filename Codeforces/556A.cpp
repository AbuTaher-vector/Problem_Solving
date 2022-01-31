#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
  nn n,zero=0,one=0;
  cin>>n;
  ss s;
  cin>>s;
  for(nn i=0;i<n;i++)
  {
    if(s[i]=='0') zero++;
    else one++;
  }
  cout<<max(one,zero)-min(one,zero)<<nl;
}