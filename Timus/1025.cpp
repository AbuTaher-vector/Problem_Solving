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
    nn arr[tt+1];
    for(nn i=0;i<tt;i++) cin>>arr[i];
    sort(arr,arr+tt);
    nn sum=0;
    for(nn i=0;i<=tt/2;i++) sum+=arr[i]/2+1;
    cout<<sum<<endl;

}