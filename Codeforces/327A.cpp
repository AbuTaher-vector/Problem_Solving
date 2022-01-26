#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn  n;
   cin>>n;
   nn x;
   nn cnt=0,y=0,mx=-1;
   while(n--)
   {
      cin>>x;
      if(x==0)
      {
         cnt++;
         if(cnt>mx) mx=cnt;
      }
      else 
      {
         cnt--;
         y++;
      }
      if(cnt<0) cnt=0;
   }
   cout<<y+mx<<"\n";
      
}