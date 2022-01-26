#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,k,x,y,flag=0;
        cin>>n>>k>>x>>y;
        int a=x;
        while(1)
        {
            x=(x+k)%n;
            if(y==x)
            {
                flag=1;
                break;
            }
            else if(x==a) break;

        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
