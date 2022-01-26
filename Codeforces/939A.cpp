#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,flag=0;
    cin>>tt;
    nn arr[tt+1];
    for(nn i=1;i<=tt;i++) cin>>arr[i];
    for(nn i=1;i<=tt;i++)
    {
        if(i==arr[arr[arr[i]]])
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
