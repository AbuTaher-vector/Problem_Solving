#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn tt;
    cin>>tt;
    for(nn i=1;i<=tt;i++)
    {
        nn n,p,q;
        cin>>n>>p>>q;
        nn arr[n+1],cnt=0;
        for(nn j=0;j<n;j++) cin>>arr[j];
            nn sum=0;
        for(nn j=0;j<n;j++)
        {
            sum+=arr[j];
            if(sum<=q && j+1<=p) cnt++;
            else break;
        }
        cout<<"Case "<<i<<": "<<cnt<<nl;
    }

}