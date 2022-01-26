#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string

void code()
{
  ll x;
  cin>>x;
  for(ll i=x;i;i++)
  {
      ll sum=0;
      ll k=i;
      while(k>0)
        {
           sum+=k%10;
             k/=10;
         }

    if(__gcd(i,sum)>1)
    {
      cout<<i<<"\n";
      break;
    }

  }
  

}
int main()
{      
   
 nn tt;
 cin>>tt;
 while(tt--) code();


}