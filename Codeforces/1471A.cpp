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
    while(tt--)
    {
        ll n,x;
        cin>>n>>x;
        ll mn=0,mx=0,b;
        while(n--)
        {
            cin>>b;
            if(b%x==0) mx+=b/x;
            else mx+=b/x+1;
            mn+=b;
        }
        if(mn%x==0) mn/=x;
        else mn=mn/x+1;
        cout<<mn<<" "<<mx<<endl;

    }

}