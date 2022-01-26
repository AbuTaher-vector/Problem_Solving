#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,i,count=0;
    cin>>x>>t;
    int ara[x];
    for(i=1;i<=x;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=x;i++)
    {
        if(ara[i]>=ara[t]  && ara[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;

}