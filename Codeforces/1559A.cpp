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
      for(nn i=1;i<n;i++) arr[0] &=arr[i];
         cout<<arr[0]<<nl;
}
int main()
{
   nn tt;

   cin>>tt;
   while(tt--) code();
}