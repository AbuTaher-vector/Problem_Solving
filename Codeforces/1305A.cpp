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
       vector<nn>v;
       while(tt--)
       {

           nn k;
           cin>>k;
           nn ar[k+1],arr[k+1];
           for(nn i=0;i<k;i++) cin>>ar[i];
            for(nn i=0;i<k;i++) cin>>arr[i];
            sort(ar,ar+k);
            sort(arr,arr+k);
            for(nn i=0;i<k;i++) cout<<ar[i]<<" ";
            cout<<endl;
            for(nn i=0;i<k;i++) cout<<arr[i]<<" ";
            cout<<endl;


       }



}
