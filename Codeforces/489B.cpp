#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn n;
   cin>>n;
   nn arr[n+1];
   for(nn i=0;i<n;i++) cin>>arr[i];
      nn m;
   cin>>m;
   nn ar[m+1];
   for(nn i=0;i<m;i++) cin>>ar[i];
 
      sort(arr,arr+n);
   sort(ar,ar+m);
   nn cnt=0;
   for(nn i=0;i<n;i++)
   {
      for(nn j=0;j<m;j++)
      {
         if(abs(arr[i]-ar[j])<2 && ar[j]!=0)
         {
            ar[j]=0;
            cnt++;
            break;
         }
 
      }
   }
   cout<<cnt<<"\n";
      
}