#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
   ll n;
   cin>>n;
   if(n&1) cout<<-1*((n+1)/2)<<nl;
   else cout<<n/2<<nl;

}
int main()
{ 
     nn tt;
     cin>>tt;
     while(tt--) code();   
}