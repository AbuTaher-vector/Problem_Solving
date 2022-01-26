#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   ss arr[10];
   for(nn i=0;i<8;i++) cin>>arr[i];

    for(nn i=0;i<8;i++)
    {
        ss x=arr[i];
        for(nn j=0;j<7;j++)
        {
          if(x[j]==x[j+1])
          {
            cout<<"NO"<<nl;
            return 0;
          }
        }
    }
    cout<<"YES"<<nl;

  
}