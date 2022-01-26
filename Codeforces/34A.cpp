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
       nn arr[tt+1];
       nn mn=1000,first=0,second=0;
       for(nn i=0;i<tt;i++) cin>>arr[i];
       for(nn i=0;i<tt-1;i++)
       {
          if(abs(arr[i]-arr[i+1])<mn)
          {
              mn=abs(arr[i]-arr[i+1]);
              first=i,second=i+1;
          }
       }
       if(abs(arr[0]-arr[tt-1])<mn) first=0,second=tt-1;
       cout<<first+1<<" "<<second+1<<endl;



}