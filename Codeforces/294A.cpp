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
  nn m;
  cin>>m;
   while(m--)
  {
      nn x,y;
      cin>>x>>y;
      x--;
      arr[x-1]+=y-1;
      arr[x+1]+=arr[x]-y;
      arr[x]=0;
  }
  for(nn i=0;i<tt;i++) cout<<arr[i]<<endl;

}