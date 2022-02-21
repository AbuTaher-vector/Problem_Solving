#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n;
     cin>>n;
     vector<nn>arr(n);
     for(nn i=0;i<n;i++) cin>>arr[i];
     nn cnt=0;
     for(nn i=1;i<n-1;i++)
     {
          if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
          {
               cnt++;
               if(i+2<n && arr[i+2]>=arr[i]) arr[i+1]=arr[i+2];
               else arr[i+1]=arr[i];
          }

     }
     cout<<cnt<<nl;
     for(auto x:arr) cout<<x<<" ";
          cout<<nl;
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}