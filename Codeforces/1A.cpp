#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,x,y;
    cin>>a>>b>>c;
    if(a%c==0)
    {
        x=a/c;
    }
    else if(a%c!=0)
    {
        x=a/c+1;
    }
    if(b%c==0)
    {
        y=b/c;
    }
    else if(b%c!=0)
    {
        y=b/c+1;
    }
    cout<<x*y<<endl;
}