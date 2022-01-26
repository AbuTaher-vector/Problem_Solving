#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,cnt=1,y;
    cin>>k>>t;
    y=k;
    while(1)
    {
        if(y%10==0 || y%10==t) break;
        else
        {
            cnt++;
           y=k*cnt;
        }
    }
    cout<<cnt<<endl;
}