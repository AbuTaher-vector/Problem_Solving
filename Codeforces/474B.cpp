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
   cin>>arr[0];
   for(nn i=1;i<n;i++)
   {
      cin>>arr[i];
      arr[i]+=arr[i-1];
   }
   nn m;
   cin>>m;
   while(m--)
   {
      nn q;
      cin>>q;
      cout<<lower_bound(arr,arr+n,q)-arr+1<<nl;
   }
}
int main()
{
   code();
}