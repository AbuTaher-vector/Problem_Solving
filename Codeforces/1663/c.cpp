#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
  nn n,sum=0;
  cin>>n;
  vector<nn>v(n);
  for(nn i=0;i<n;i++)
  {
    cin>>v[i];
    sum+=v[i];
  }
  cout<<sum<<nl;
       
}