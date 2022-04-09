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
      while(tt--)
      {
          nn n;
          cin>>n;
          for(nn i=0;i<n;i++)
          {
              for(nn j=0;j<n;j++)
              {
                  if(i==j || j==(i+1)%n) cout<<1<<" ";

                  else cout<<0<<" ";
              }
              cout<<endl;
          }
      }
}