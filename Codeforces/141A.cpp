#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,x,c;
    cin>>a>>b>>x;
    c=a+b;
    sort(c.begin(),c.end());
    sort(x.begin(),x.end());
    if(c==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}