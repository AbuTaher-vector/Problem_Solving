#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,t;
    cin>>tt>>t;
    nn arr[tt+1];
   nn  cnt=0,k;
    for(nn i=0;i<tt;i++)
    {
        cin>>arr[i];
        if(arr[i]<0) cnt++;
    }
    sort(arr,arr+tt);
    if(cnt>=t) k=t;
    else k=cnt;
    nn sum=0;
    for(nn i=0;i<k;i++) sum+=abs(arr[i]);
    cout<<sum<<endl;



}
