#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,sum=0,even=0,odd=0,x;
    cin>>tt;
    for(nn i=1;i<=tt;i++)
    {
        cin>>x;
        sum+=x;
        if(x%2==0) even++;
        else odd++;
    }
    if(sum%2==0) cout<<even<<endl;
    else cout<<odd<<endl;
}