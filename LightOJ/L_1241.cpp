#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{  
     nn tt;
     cin>>tt;
     for(nn i=1;i<=tt;i++)
     {
          nn n,cnt=0;
          cin>>n;
          vector<nn>v(n);
          for(nn i=0;i<n;i++) cin>>v[i];
          cnt=ceil(((dd)v[0]-2)/5);
               for(nn i=1;i<n;i++)
               {
                    if(v[i]>v[i-1])
                    {
                         cnt+=ceil(((dd)v[i]-v[i-1])/5);
                    }

               }
         cout<<"Case "<<i<<": "<<cnt<<nl;
         
     }
        
}