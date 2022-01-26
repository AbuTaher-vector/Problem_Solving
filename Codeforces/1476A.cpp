#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn tt;
   cin>>tt;
   while(tt--)
   {
       ll n,k,i=2;
       cin>>n>>k;
       if(n>k)
       {
          if(n%k==0) cout<<1<<endl;
          else cout<<2<<endl;
       }
       else{
             nn t=k/n;
       nn r=k%n;
       if(r==0) cout<<t<<endl;
       else cout<<t+1<<endl;

       }

   }




}