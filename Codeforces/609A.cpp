#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn n,m;
   cin>>n>>m;
   nn arr[n+1];
   for(nn i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   reverse(arr,arr+n);
   nn sum=0;
   for(nn i=0;i<n;i++)
   {
       sum+=arr[i];
       if(sum>=m)
       {
           cout<<i+1<<endl;
           break;
       }
   }



}
