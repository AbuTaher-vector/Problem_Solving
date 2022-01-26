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
   nn k=(tt+1)/2;
   for(nn i=1;i<=tt;i++)
   {
       for(nn j=1;j<=tt;j++)
       {
           if(abs(i-k)+abs(j-k)<=tt/2) cout<<"D";
           else cout<<"*";
       }
       cout<<endl;
   }

}