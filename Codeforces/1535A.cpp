#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn a,b,c,d;
    cin>>a>>b>>c>>d;
    nn x=min(a,b);
    nn y=max(a,b);
    nn w=min(c,d);
    nn q=max(c,d);
   if(y<w) cout<<"NO\n";
   else if(q<x) cout<<"NO\n";
   else cout<<"YES\n";
    
 
}                           
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}