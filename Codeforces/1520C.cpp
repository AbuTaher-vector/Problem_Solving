#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
   nn n;
   cin>>n;
   if(n==1)
   {
      cout<<1<<nl;
      return 0;
   }
   if(n==2)
   {
      cout<<-1<<nl;
      return 0;
   }
   nn w=1;
  for(nn i=1;i<=n;i++)
  {
      nn k=n;
      while(k--)
      {
            cout<<w<<" ";
            w+=2;
            if(w>n*n) w=2;
      }
      cout<<nl;

  }
  return 0;

      
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code();
 
}