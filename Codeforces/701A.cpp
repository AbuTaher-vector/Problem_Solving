#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn tt,sum=0;
     cin>>tt;
     nn arr[tt+1];
     nn t=tt/2;
     for(int i=0;i<tt;i++)
     {
         cin>>arr[i];
         sum+=arr[i];
     }
     sum/=t;
     for(int i=0;i<tt;i++)
     {
         for(int j=i+1;j<tt;j++)
         {
             if(arr[i]+arr[j]==sum)
             {
                 cout<<i+1<<" "<<j+1<<endl;
                 arr[j]=arr[i]=0;
             }
         }

     }

}
