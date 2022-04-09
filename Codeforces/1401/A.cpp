#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,c=0,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
    if(k>=n)
        {cout<<(k-n)<<endl;}
        else
            {cout<<(n+k)%2<<endl;}
            n=0,k=0;
        }
    return 0;
}