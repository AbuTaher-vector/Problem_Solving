#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,k;
     cin>>n>>k;
     if(n%2==1) cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<nl;
     else
     {
          nn a=n/2;
          if(a%2==0)  cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<nl;
          else  cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<nl;


     }
     


}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}