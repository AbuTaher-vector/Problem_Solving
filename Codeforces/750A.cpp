#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,solve=0,cnt=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        solve+=5*i;
        if(solve<=(240-k)) cnt++;
        else break;
    }
    cout<<cnt<<endl;
}