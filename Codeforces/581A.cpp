#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,cnt=0;
    cin>>a>>b;
    x=max(a,b);
    y=min(a,b);
    while(x-- && y--)
    {
        cnt++;
    }
     cout<<cnt<<" "<<++x/2<<endl;

}