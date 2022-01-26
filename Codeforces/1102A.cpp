#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,sum=0;
    cin>>tt;
    for(int i=1;i<=tt;i++) sum+=i;

    if(sum%2==0) cout<<0<<endl;
    else cout<<1<<endl;
}