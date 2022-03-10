#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,indx=0,indx2=0;
    cin>>n;
    nn arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
     for(nn i=0;i<n;i++)
     {
          if(arr[i]!=i+1)
          {
               indx=i;
               break;
          }
     }
     nn k=indx+1;
     for(nn i=indx;i<n;i++)
     {
          if(arr[i]==k)
          {
               indx2=i;
               break;
          }
     }
     indx2++;
     reverse(arr+indx,arr+indx2);
     for(nn i=0;i<n;i++) cout<<arr[i]<<" ";
          cout<<nl;
          
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}