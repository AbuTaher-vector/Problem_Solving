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
   ll arr[n+1];
   for(nn i=0;i<n;i++) cin>>arr[i];
      ll ans=0;
      for(nn i=0;i<n;i++)
      {
         if(arr[i]<0)
         {
            nn k=i;
            ll mx1=INT_MIN;
            while(1)
            {
               if(k==n || arr[k]>0) break;
               mx1=max(mx1,arr[k]);
               k++;
            }
            i=k-1;
            ans+=mx1;
         }
         else if(arr[i]>0)
         {
            nn k=i;
            ll mx1=0;
            while(1)
            {
               if(k==n || arr[k]<0) break;
               mx1=max(mx1,arr[k]);
               k++;
            }
            i=k-1;
            ans+=mx1;
         }

      }
      cout<<ans<<nl;
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}