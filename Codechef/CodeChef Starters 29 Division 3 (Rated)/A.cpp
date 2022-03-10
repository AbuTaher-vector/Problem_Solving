#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
     nn x,y;
     cin>>x>>y;
     nn arr[x+1];
     for(nn i=0;i<x;i++) cin>>arr[i];
        reverse(arr,arr+x);
    for(nn i=0;i<x;i++)
    {
        if(arr[i]<y)
        {
            cout<<x-i<<nl;
            return 0;
        }
    }
    cout<<0<<nl;
    return 0;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
      
}