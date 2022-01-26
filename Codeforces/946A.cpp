#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

      nn tt,sum=0;
      cin>>tt;
       nn arr[tt+1];
      for(nn i=0;i<tt;i++)
      {
          cin>>arr[i];
          sum+=abs(arr[i]);
      }
      cout<<sum<<endl;


}
