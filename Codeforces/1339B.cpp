#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
     nn n;
     cin>>n;
     nn arr[n+1];
     for(nn i=0;i<n;i++) cin>>arr[i];
          sort(arr,arr+n);
     nn ans[n+1];
     nn index=n-1;
     if(n%2!=0) ans[0]=arr[n/2];
     for(nn i=0;i<n/2;i++)
     {
          ans[index--]=arr[n-1-i];
          ans[index--]=arr[i];
     }
      for(nn i=0;i<n;i++) cout<<ans[i]<<" ";
          cout<<nl;
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
    
}