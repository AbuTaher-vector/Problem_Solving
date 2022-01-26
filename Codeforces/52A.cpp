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
    nn max=0,cnt=1;
    for(nn i=0;i<tt;i++) cin>>arr[i];
    sort(arr,arr+tt);
    for(nn i=0;i<tt-1;i++)
    {
        if(arr[i]==arr[i+1]) cnt++;
        else{
            if(cnt>max) max=cnt;
            cnt=1;
        }
    }
    if(cnt>max) max=cnt;
    cout<<tt-max<<endl;


}
