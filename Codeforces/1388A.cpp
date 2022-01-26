#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,n=14;
        cin>>x;
        x-=30;
        if(x==6 || x==10 || x==n)  n++,x--;
        if(x>0) cout<<"YES"<<endl<<"6 10 "<<n<<" "<<x<<endl;
        else cout<<"NO"<<endl;
    }
}