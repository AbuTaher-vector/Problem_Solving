#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,h,m;
    cin>>tt;
    while(tt--)
    {
        cin>>h>>m;
        cout<<(24-h)*60-m<<endl;
    }
}