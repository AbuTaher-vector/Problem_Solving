#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
   nn n,x;
   cin>>n>>x;
   n=n*2;
   if(x<=n/2) cout<<n-(x-1)<<nl;
   else cout<<n-x+1<<nl;

}
int main()
{ 
     nn tt;
     cin>>tt;
     while(tt--) code();   
}