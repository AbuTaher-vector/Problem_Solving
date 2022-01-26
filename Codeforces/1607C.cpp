#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll sum=arr[0],mx=arr[0];
    for(ll i=1;i<n;i++)
    {
         ll k=(arr[i]-sum);
         sum+=k;
         mx=max(mx,k);
 
    }
    cout<<mx<<nl;
    
 
 
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
   
}