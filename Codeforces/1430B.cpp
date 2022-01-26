#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn tt;
   cin>>tt;
   while(tt--)
   {
       nn x,q;
       cin>>x>>q;
       nn arr[x+1];
       for(nn i=0;i<x;i++) cin>>arr[i];
       sort(arr,arr+x);
       reverse(arr,arr+x);
       ll sum=0;
       for(nn i=0;i<=q;i++) sum+=arr[i];
       cout<<sum<<endl;
   }



}
