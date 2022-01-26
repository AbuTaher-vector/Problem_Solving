#include<bits/stdc++.h>
using namespace std;
#define ll double
#define Pi acos(-1.0)
int main()
{
    int t;
    cin>>t;
    for(int i =1;i<=t;i++)
    {
        ll r1,r2,h,p,R;
        cin>>r1>>r2>>h>>p;
        R=r2+((r1-r2)/h)*p;

        cout<<"Case "<<i<<": ";
        printf("%.9lf\n",((R*R+r2*r2+R*r2)*p*Pi)/3.0);


    }
}