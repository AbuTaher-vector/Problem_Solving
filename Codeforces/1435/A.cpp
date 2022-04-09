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
        nn x,cnt=0;
        cin>>x;
        nn arr[x+1];
        for(nn i=0;i<x;i++)  cin>>arr[i];
         for(nn i=0;i<x;i=i+2)
         {
             cnt=0;
             if(arr[i]<0) cnt++;
             if(arr[i+1]<0) cnt++;
             if(cnt==1) cout<<'-'<<abs(arr[i+1])<<" "<<'-'<<abs(arr[i])<<" ";
             else cout<<'-'<<abs(arr[i+1])<<" "<<abs(arr[i])<<" ";

         }

      cout<<endl;



    }



}