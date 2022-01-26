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
           nn n ,k,flag=0,cnt=0;
           cin>>n>>k;
           nn arr[n+1];
           for(int i=0;i<n;i++) cin>>arr[i];
           sort(arr,arr+n);
               for(int i=1;i<n;i++)
               {
                   nn x=(k-arr[i])/arr[0];
                   cnt+=x;
               }
               cout<<cnt<<endl;
       }
}