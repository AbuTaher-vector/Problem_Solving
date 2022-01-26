#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,a=1,b=1;
    cin>>x>>y;
    int fact=min(x,y);
    long long f=1;
    while(fact) f*=fact--;
     cout<<f<<endl;
}