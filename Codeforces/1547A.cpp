#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   nn a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   nn ans = abs(a-c)+abs(b-d);
   if(a==c && a==e)
   {
      nn arr[3];
      arr[0]=b,arr[1]=d,arr[2]=f;
      sort(arr,arr+3);
      if(arr[1]==f) ans+=2;
   }
   else if(b==d && b==f)
   {
      nn arr[3];
      arr[0]=a,arr[1]=c,arr[2]=e;
      sort(arr,arr+3);
      if(arr[1]==e) ans+=2;
   }
   cout<<ans<<"\n";
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}