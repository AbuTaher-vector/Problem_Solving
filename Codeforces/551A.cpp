#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,cnt=1;
    cin>>tt;
    nn arr[tt+1];
    for(nn i=0;i<tt;i++) cin>>arr[i];
    for(nn i=0;i<tt;i++)
    {
        for(nn j=0;j<tt;j++) if(arr[i]<arr[j]) cnt++;

       cout<<cnt<<" ";

       cnt=1;
    }
    cout<<endl;


}