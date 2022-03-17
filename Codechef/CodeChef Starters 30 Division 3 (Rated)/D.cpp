#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{

     nn n;
     dd k;
     cin>>n>>k;
     dd arr[n+1],sum=0,cnt=0;
     for(nn i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
    for(nn i=0;i<n;i++)
    {
        sum+=arr[i];
         if(sum<=k) cnt++;
         else
         {
            sum-=arr[i];
            arr[i]/=2;
            dd x=ceil(arr[i]);
            sum+=x;
            if(sum<=k) cnt++;
            break;
         }
    }
    cout<<cnt<<nl;

    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}