#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    ll n,k;
    cin>>n>>k;
    for(nn i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<n+i+((k-1)*2)<<nl;
            return 0;
        }
    }
    cout<<n*2+((k-1)*2)<<nl;
    return 0;

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}