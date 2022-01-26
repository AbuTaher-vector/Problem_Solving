#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
 int arr[1000000];
int main()
{

    while(1)
    {
         nn tt;
         cin>>tt;
         if(tt==0) break;
        arr[0]=0,arr[1]=1;

         for(nn i=2;i<=tt;i++)
       {
        if(i%2==0) arr[i]=arr[i/2];
        else arr[i]=arr[i/2]+arr[i/2+1];
       }
       sort(arr,arr+tt+1);
      reverse(arr,arr+tt+1);
       cout<<arr[0]<<endl;


    }


}