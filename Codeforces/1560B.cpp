#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn a,b,c;
    cin>>a>>b>>c;
    nn k=abs(a-b);
    nn total=k*2;
    if(c>total || total<max(a,b))
    {
        cout<<-1<<nl;
 
    } 
    else if(c+k>total)
    {
        if(c-k!=a && c-k!=b && c-k!=0) cout<<c-k<<nl;
        else cout<<-1<<nl;
    }
   else if(c-k<0)
    {
        if(c+k!=a && c+k!=b) cout<<c+k<<nl;
        else cout<<-1<<nl;
 
    }
    else
    {
        if(c-k!=a && c-k!=b && c-k!=0) cout<<c-k<<nl;
        else if(c+k!=a && c+k!=b) cout<<c+k<<nl;
        else cout<<-1<<nl;
 
    }
 
 
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}