#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,d,cnt=0;
    cin>>tt>>d;
    nn arr[tt+1];
    for(nn i=0;i<tt;i++) cin>>arr[i];
    for(nn i=0;i<tt-1;i++)
    {
        nn x=i+1;
        while(x!=tt)
        {
            nn k=abs(arr[x]-arr[i]);
            if(k<=d) cnt++;
            x++;
        }
    }
    cout<<2*cnt<<endl;



}
