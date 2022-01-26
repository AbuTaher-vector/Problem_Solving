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
         nn n,d;
         cin>>n>>d;
         nn arr[n+1];
         for(nn i=0;i<n;i++) cin>>arr[i];
         nn k=arr[0];
          for(nn i=1;i<n;i++)
          {
               nn m=min(arr[i],d/i);
               k+=m;
               d-=m*i;
          }
        cout<<k<<endl;
     }


}