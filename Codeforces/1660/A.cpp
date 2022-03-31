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
   if(b==0 && a==0) cout<<a+1<<nl;
   else if(b!=0 && a==0) cout<<1<<nl;
   else if(a!=0 && b==0) cout<<a+1<<nl;
   else cout<<a+(b*2)+1<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}