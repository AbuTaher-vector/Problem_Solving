#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1) cout<<"0"<<endl;
        else if(n==2) cout<<m<<endl;
        else cout<<m*2<<endl;
    }
}