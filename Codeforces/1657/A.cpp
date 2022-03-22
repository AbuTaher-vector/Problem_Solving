#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    nn x,y;
    cin>>x>>y;
    nn a=(x*x)+(y*y);
    nn b=sqrt(a);
    if(x==0 && b==0) cout<<0<<nl;
    else if(a==b*b) cout<<1<<nl;
    else cout<<2<<nl;


}
int main()
{ 
   nn tt;
   cin>>tt;
   while(tt--) code();  
}