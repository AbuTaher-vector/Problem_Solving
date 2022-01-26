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
        dd r;
        cin>>r;
        dd s=(2*r)*(2*r);
        dd pi = 2 * acos (0.0);
        dd c=pi*r*r;
        dd ans=s-c;
        cout<<"Case "<<j<<": ";
        printf("%.2lf\n",ans);

    }

}