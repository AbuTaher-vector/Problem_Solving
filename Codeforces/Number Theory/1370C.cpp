#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int is_prime(nn k)
{
    for(nn i=2;i<=sqrt(k);i++)
    {
        if(k%i==0) return 0;
    }
    return 1;
}
void code()
{
   nn n;
   cin>>n;
   if(n==1) cout<<"FastestFinger"<<nl;
   else if(n&1 || n==2) cout<<"Ashishgup"<<nl;
   else
   {
     nn k=n/2;
       
       if(!(n&(n-1)) || is_prime(k)) cout<<"FastestFinger"<<nl;
       else cout<<"Ashishgup"<<nl;

   } 

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}