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
       nn x;
       cin>>x;
       nn sum=0;
       nn i=1;
       while(sum<x)
       {
           sum+=i++;
       }
       if(sum==x+1) cout<<i<<endl;
       else cout<<i-1<<endl;

   }



}