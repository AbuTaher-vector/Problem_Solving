#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn arr[4];
    for(nn i=0;i<4;i++) cin>>arr[i];
    sort(arr,arr+4);
    reverse(arr,arr+4);
    if(arr[1]+arr[2]>arr[0]) cout<<"TRIANGLE"<<endl;
    else if(arr[3]+arr[2]>arr[1]) cout<<"TRIANGLE"<<endl;
    else if(arr[1]+arr[2]==arr[0]) cout<<"SEGMENT"<<endl;
    else  if(arr[3]+arr[2]==arr[1]) cout<<"SEGMENT"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
}