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
        nn n;
        cin>>n;
        nn arr[n+1];
        for(nn i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
         reverse(arr,arr+n);
         nn cnt=0;
         for(nn i=0;i<n;i++)
         {
             nn a=i+1;
             while(a!=n)
             {
                 if(arr[i]>arr[a])
                 {
                     cnt++;
                     break;
                 }

                 a++;
             }

         }
         cout<<cnt<<endl;



    }

}