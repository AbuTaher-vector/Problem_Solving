#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt,cnt=1;
    cin>>tt;
    for(int i=2;i<=tt/2;i++)
    {
        if(tt%i==0) cnt++;
    }
    cout<<cnt<<endl;
}