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
       nn t;
       cin>>t;
       dd arr[t+1];
       set<dd>s;
       for(nn i=0;i<t;i++)
       {
           cin>>arr[i];
           arr[i]=arr[i]*0.5;
       }
       for(nn i=0;i<t-1;i++)
       {
           nn x=i+1;
           while(x!=t)
           {
               s.insert(arr[x]-arr[i]);
               x++;
           }
       }
       cout<<s.size()<<endl;


   }



}
