#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   nn n,k;
   cin>>k>>n;
   nn sum=n;
   while(n>k-1) 
   {
      sum+=n/k;
      n=(n/k)+(n%k);
   }
   cout<<sum<<nl;
}
int main()
{
   nn tt;

   cin>>tt;
   while(tt--) code();
}