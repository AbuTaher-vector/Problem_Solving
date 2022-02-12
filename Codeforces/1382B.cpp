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
     vector<nn>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
          ss ans="First";
     for(nn i=0;i<n-1;i++)
     {

          if(v[i]==1 && ans=="First") ans="Second";
          else if(v[i]==1 && ans=="Second") ans="First";
          else break;


     }
     cout<<ans<<nl;
     
    
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}