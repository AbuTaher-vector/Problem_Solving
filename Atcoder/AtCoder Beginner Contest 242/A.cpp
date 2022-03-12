#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    dd a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x<=a) cout<<"1.000000000000"<<nl;
    else if(x>b) cout<<"0.000000000000"<<nl;
    else 
    {
        dd k=c/(b-a);
        printf("%.12lf\n",k);
    }
    
}