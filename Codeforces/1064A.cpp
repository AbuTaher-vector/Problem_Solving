#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

      nn arr[3];
      for(int i=0;i<3;i++) cin>>arr[i];
      sort(arr,arr+3);
      if(arr[0]+arr[1]>arr[2]) cout<<0<<endl;
     else  cout<<arr[2]+1-arr[0]-arr[1]<<endl;

}