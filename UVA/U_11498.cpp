#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    while(1)
    {
        nn tt,n,m;
        cin>>tt;
        if(tt==0) break;
        else cin>>n>>m;
        while(tt--)
        {
            nn x,y;
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa"<<nl;
            else if(x>n && y>m) cout<<"NE"<<nl;
            else if(x>n && y<m) cout<<"SE"<<nl;
            else if(x<n && y>m) cout<<"NO"<<nl;
            else cout<<"SO"<<nl;
        }
    }
}