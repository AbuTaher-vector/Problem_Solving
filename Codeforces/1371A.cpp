#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>x;
    while(x--)
    {
        cin>>t;
    if(t&1) cout<<(t+1)/2<<endl;
    else cout<<t/2<<endl;
    }

}