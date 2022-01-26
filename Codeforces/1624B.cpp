#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn a,b,c;
    cin>>a>>b>>c;
    nn x=2*b-c;
    nn y=2*b-a;
    nn z=a+c;
    if((x%a==0 && x>0) || (y%c==0 && y>0) || (z%2==0 && (z/2)%b==0)) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}
int main()
{ 
    nn tt;
    cin>>tt;
    while(tt--) code();   
}