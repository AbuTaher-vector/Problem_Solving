#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define sss string
int main()
{
     int arr[5],sum=0,sum1=0;
     for(int i=0;i<4;i++)
     {
         cin>>arr[i];
         sum+=arr[i];
     }
     if(sum%2!=0) cout<<"NO"<<endl;
     else{
         sort(arr,arr+4);
        sum1=arr[0]+arr[3];
        if(sum1*2==sum  || arr[0]+arr[1]+arr[2]==arr[3]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }

}