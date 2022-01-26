#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,y,a,b,rabit1,rabit2,cnt=0,flag=0;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0) cout<<(y-x)/(a+b)<<endl;
        else cout<<-1<<endl;
    }
}