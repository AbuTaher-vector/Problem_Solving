#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t,i;
     cin>>t;
     int arr[t],cnt=0,sum=0;
     for( i=0;i<t;i++) cin>>arr[i];
     for(i=0;i<t;i++)
     {
         if(sum==0 && arr[i]==-1) cnt++;
         else if(arr[i]!=-1) sum+=arr[i];
         else if(sum!=0 && arr[i]==-1) sum-=1;
     }
     cout<<cnt<<endl;

}