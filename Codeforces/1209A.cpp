#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int a[105],arr[105];
int main()
{

      nn n,a[105]={0},cnt=0;
      cin>>n;
      for(nn i=0;i<n;i++) cin>>arr[i];
      sort(arr,arr+n);
      for(nn i=0;i<n;i++)
      {
          if(a[arr[i]]==0)
          {
              cnt++;
          for(nn j=i+1;j<n;j++) if(a[arr[j]]==0 && arr[j]%arr[i]==0) a[arr[j]]++;
          }

      }
      cout<<cnt<<endl;



}