#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,x,y;
    cin>>n>>x>>y;
    nn a=n/100,b=n/4;
    if(n%100!=0) a++;
    if(n%4!=0) b++;
    nn r=0,t=0;
    if((n%100)%4!=0) r++;
    if(n%4!=0) t++;
    nn c=x*a,d=y*b,e=((n/100)*x)+(((n%100)/4)*y)+r*y,f=((n/4)*y)+t*x;
    cout<<min(c,min(d,min(e,f)))<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}