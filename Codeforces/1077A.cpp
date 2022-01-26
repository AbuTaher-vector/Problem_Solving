#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c;
        if(c%2==0) x=y=c/2;
        else x = (c+1)/2, y = (c-1)/2;
        cout<<(a*x)-(b*y)<<endl;

    }
}