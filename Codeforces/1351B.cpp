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
        nn a,b,c,d,mx1,mx2,mn1,mn2;
        cin>>a>>b>>c>>d;
        mx1=max(a,b);
        mx2=max(c,d);
         mn1=min(a,b);
        mn2=min(c,d);

        if(mx1==mx2 && mn1+mn2==mx1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

}
