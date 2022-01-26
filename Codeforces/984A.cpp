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
        if(tt%2==0) tt=tt/2-1;
        else tt/=2;
        cout<<arr[tt]<<endl;


}