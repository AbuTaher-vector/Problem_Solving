#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn a,b;
     cin>>a>>b;
     if(21-(a+b)>10) cout<<-1<<nl;
     else cout<<21-(a+b)<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}