#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,x;
        cin>>n>>x;
        if(n<=2) cout<<1<<endl;
        else
        {
          n=n-2;
        if(n%x==0) cout<<n/x+1<<endl;
        else if(n%x!=0) cout<<n/x+2<<endl;
        }

    }
}