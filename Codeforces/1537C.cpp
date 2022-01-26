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
    cin>>n;
    nn arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
    nn x,y,mn=INT_MAX;
    for(nn i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<mn)
        {
            x=i;
            y=i+1;
            mn=(arr[i+1]-arr[i]);
        }

    }
    cout<<arr[x]<<" ";
    for(nn i=y+1;i<n;i++) cout<<arr[i]<<" ";
        for(nn i=0;i<x;i++) cout<<arr[i]<<" ";
            cout<<arr[y]<<nl;

}
int main()
{
   
   nn tt;
   cin>>tt;
   while(tt--) code();

}