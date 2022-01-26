#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn tt,cnt=0;
   cin>>tt;
   nn arr[tt+1];
   for(nn i=0;i<tt;i++) cin>>arr[i];
   for(nn i=1;i<tt-1;i++)
   {
       if((arr[i-1]>arr[i] && arr[i+1]>arr[i]) ||  (arr[i-1]<arr[i] && arr[i+1]<arr[i])) cnt++;
   }
  cout<<cnt<<endl;

}
