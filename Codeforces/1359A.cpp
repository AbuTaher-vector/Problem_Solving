#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
   nn n,m,k;
   cin>>n>>m>>k;
    nn a=n/k;
    if(a>=m)
    {
      cout<<m<<nl;
      return 0;
    }
      nn x=a;
      m-=a;
      k--;
     nn y=(m/k);
            if(m%k!=0) y++;
          cout<<x-y<<nl;
            return 0;
       

      
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code();
 
}