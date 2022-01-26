#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt;
      cin>>tt;
      nn arr[tt+1];
      for(nn i=0;i<tt;i++) cin>>arr[i];
      for(nn i=tt-1;i>=0;i--)
      {
          if(arr[i]!=arr[i-1])
          {
              cout<<i<<endl;
              break;
          }
      }

}
