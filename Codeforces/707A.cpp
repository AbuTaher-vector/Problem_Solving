#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0,x;
    char b;
    cin>>t>>x;
    while(t--)
    {
        for(int i=0;i<x;i++)
        {
            cin>>b;
            if(b=='C' || b=='M' || b=='Y') cnt++;
        }

    }
    if(cnt!=0) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}