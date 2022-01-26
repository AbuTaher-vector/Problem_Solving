#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll tt;
    cin>>tt;
    for(nn j=1;j<=tt;j++)
    {
        nn a,b;
        cin>>a>>b;
        nn k=abs(a-b);
        nn r= k*4+3*3+5*2+a*4;
        cout<<"Case "<<j<<": "<<r<<endl;;

    }

}