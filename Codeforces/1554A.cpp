#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
      ll mx=0;
    for(nn i=0;i<n-1;i++)  mx=max(mx,arr[i]*arr[i+1]);
      cout<<mx<<"\n";
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}