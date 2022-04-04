#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{

  vector<nn>v{1200,1400,1600,1900,2100,2300,2400,2600,3000};
  nn n;
  cin>>n;
  cout<<*upper_bound(v.begin(),v.end(),n)<<nl;
       
}