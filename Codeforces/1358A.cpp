#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int a=x*y;
        cout<<(a/2)+(a%2)<<endl;
    }
}