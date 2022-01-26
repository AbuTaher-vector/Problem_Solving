#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int a,b,n,cnt=0,sum=0;
        cin>>a>>b>>n;
        while(sum<=n)
        {
            sum=a+b;
           b=max(a,b);
           a=sum;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}