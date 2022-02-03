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
        dd r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        dd x=r2*h/(r1-r2);
        dd r3=(r2*(p+x))/x;
        dd ans= (acos(-1)*p*((r2*r2)+(r3*r3)+(r2*r3)))/3;
        cout<<"Case "<<i<<": ";
        printf("%.9lf\n",ans);
    }
}