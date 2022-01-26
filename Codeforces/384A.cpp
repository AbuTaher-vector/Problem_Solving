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
   cout<<(tt*tt+1)/2<<endl;
   for(nn i=0;i<tt;i++)
   {
       for(nn j=0;j<tt;j++)
       {
           if((i+j)%2==0) cout<<"C";
           else cout<<".";
       }
       cout<<endl;
   }



}