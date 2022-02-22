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
    nn arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
      nn k,x;
     cin>>k;
    while(k--)
    {
         cin>>x;
         nn it=lower_bound(arr,arr+n,x)-arr;
         if(it==0) cout<<"X"<<" ";
         else cout<<arr[it-1]<<" ";
        it=upper_bound(arr,arr+n,x)-arr;
        if(it>=n) cout<<"X"<<nl;
        else cout<<arr[it]<<nl;


    }
   
}