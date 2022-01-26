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
        ss a,b;
        cin>>a;
        b=a;
        reverse(b.begin(),b.end());
        cout<<"Case "<<i<<": ";
        if(a==b) cout<<"Yes";
        else cout<<"No";
        cout<<nl;
    }

}