#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     dd x1,x2,y1,y2;
     cin>>x1>>x2>>y1>>y2;
     if(y1/x1<y2/x2) cout<<-1<<nl;
     else if(y1/x1>y2/x2) cout<<1<<nl;
     else cout<<0<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}