#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn n,k;
   cin>>n>>k;
   nn arr[n];
   k-=(n*2);
   for(nn i=0;i<n;i++) arr[i]=2;
   for(nn i=0;i<n;i++)
   {
      if(k>0) arr[i]++,k--;
      else break;
   }
sort(arr,arr+n);
nn cnt=0;
for(nn i=0;i<n;i++) if(arr[i]==2) cnt++;
cout<<cnt<<"\n";


}