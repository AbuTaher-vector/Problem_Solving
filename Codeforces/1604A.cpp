#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
  nn n;
  cin>>n;
  nn arr[n+1];
  for(nn i=0;i<n;i++) cin>>arr[i];
      nn ans=INT_MIN;
  for(nn i=0;i<n;i++)
  {
      if(arr[i]>i) ans=max(ans,arr[i]-i);
  }
  cout<<ans-1<<nl;
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code(); 
}