#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn n,k,flag=0;
     cin>>n>>k;
      nn arr[n+1];
      vector<nn>v;
      for(int i=0;i<n;i++) cin>>arr[i];
      for(int i=n-1;i>=0;i--)
      {
          flag=0;
          for(int j=i-1;j>=0;j--)
          {
              if(arr[i]==arr[j])
              {
                  flag=1;
                  break;
              }
          }
          if(flag==0) v.push_back(i+1);
      }
      if(v.size()>=k)
      {
          cout<<"YES"<<endl;
          reverse(v.begin(),v.end());
          for(int i=0;i<k;i++) cout<<v[i]<<" ";
          cout<<endl;
      }
      else cout<<"NO"<<endl;
}
