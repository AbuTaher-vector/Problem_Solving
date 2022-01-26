#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define string ss
int main()
{
       nn tt;
       cin>>tt;
       while(tt--)
       {
           nn x,fact=0;
           cin>>x;
           nn arr[x+1];
           for(int i=0;i<x;i++) cin>>arr[i];
           sort(arr,arr+x);
           for(int i=0;i<x;i++)
           {
               if(arr[i+1]-arr[i]==1)
               {
                   fact=1;
                   break;
               }
           }

         if(fact==0) cout<<1<<endl;
          else cout<<2<<endl;
       }
}