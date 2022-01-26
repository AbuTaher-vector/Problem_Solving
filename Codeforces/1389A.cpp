#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,y;
        cin>>x>>y;
        if(x*2<=y) cout<<x<<" "<<2*x<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
}