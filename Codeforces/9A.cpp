#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    int mx=max(y,w);
    int a=__gcd(7-mx,6);
    cout<<(7-mx)/a<<"/"<<6/a<<endl;
}