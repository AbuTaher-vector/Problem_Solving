#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,ttt;
    cin>>tt;
    while(tt--)
    {
        int x,c=0;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>ttt;
            c+=ttt&1;
        }
        if(c%2 || c%x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}