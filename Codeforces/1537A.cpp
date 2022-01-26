#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn x;
    cin>>x;
    nn arr[x+1];
    nn sum=0;
    for(nn i=0;i<x;i++)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    nn ans;
    if(sum<x) ans=1;
    else if(sum==x) ans=0;
    else ans=sum-x;

    cout<<ans<<"\n";
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}