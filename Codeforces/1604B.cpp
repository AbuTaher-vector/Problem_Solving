#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
  nn n;
  cin>>n;
  nn arr[n+1];
  for(nn i=0;i<n;i++) cin>>arr[i];
      if(n%2==0)
      {
            cout<<"YES"<<nl;
            return 0;
      }
 for(nn i=0;i<n-1;i++)
 {
     if(arr[i]>=arr[i+1])
     {
      cout<<"YES"<<nl;
      return 0;
     }
 }
 cout<<"NO"<<nl;
 return 0;
     
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code(); 
}