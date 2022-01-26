#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   ll n,k;
   cin>>n>>k;
   ll a=1,cnt=0;
   n--;
   while(n>0)
   {
      n-=a;
      cnt++;
      if(a+a<=k) a+=a;
      else 
            {
                  a=k;
                  break;
            }
   }
   cnt+=(n/a);
   if(n%a!=0 && n>0) cnt++;
   cout<<cnt<<nl;
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code(); 
}