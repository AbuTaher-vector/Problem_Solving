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
        nn a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<"Case "<<i<<": ";
        if(abs(a-c)==abs(b-d)) cout<<1;
        else if((a+b)%2==(c+d)%2) cout<<2;
        else cout<<"impossible";
        cout<<nl;
    }

}