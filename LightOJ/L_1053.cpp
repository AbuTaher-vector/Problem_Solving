#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll tt;
    cin>>tt;
    for(nn j=1;j<=tt;j++)
    {
        ll arr[4];
        for(nn i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        ll k=(arr[0]*arr[0]) + (arr[1]*arr[1]);
        ll l=arr[2]*arr[2];
        cout<<"Case "<<j<<": ";
        if(k==l) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

}