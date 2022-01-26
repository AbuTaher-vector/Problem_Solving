#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,sum=0,sum1=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y) sum++;
        if(x<y) sum1++;
    }
    if(sum>sum1) cout<<"Mishka"<<endl;
    else if(sum<sum1) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}