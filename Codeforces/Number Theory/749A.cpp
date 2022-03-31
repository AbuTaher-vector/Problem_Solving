#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k;
    cin>>x;
    k=x/2;
    if(x%2==0)
    {
        cout<<k<<endl;
        while(k--)cout<<2<<" ";
       cout<<endl;
    }
    else if(x&1)
    {
         cout<<k<<endl;
         k--;
         while(k--) cout<<2<<" ";
         cout<<3<<endl;
    }
}