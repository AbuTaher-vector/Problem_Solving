#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x;
    int t=5,cnt=0;
    while(t--)
    {
        cin>>y;
        if(x[0]==y[0] || x[1]==y[1]) cnt++;
    }
    if(cnt!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}