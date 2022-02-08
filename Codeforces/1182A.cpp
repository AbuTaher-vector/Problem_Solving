#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     nn n;
     cin>>n;
      ll k=pow(2,n/2);
     if(n%2==1) cout<<0<<nl;
     else cout<<k<<nl;
}