#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
ll BigMod(ll a,ll b,ll p)
{ 
     ll ans = 1;
     a%=p;
     if(a==0) return 0;
   
       while(b>0)
          {
              if(b & 1)  ans=(ans*a)%p;

               b/=2;

               a=(a*a)%p;
  
          }

  return ans;

}

int main()
{
    nn tt;
   cin>>tt;
   while(tt--)
   {

        ll a,b,c,k;
        cin>>a>>b>>c;
        if(b==0 && c==0) k=1;
        else k = BigMod(b,c,1000000007-1);
        if(k==0 and a==0) cout<<1<<"\n";
        else cout<<BigMod(a,k,1000000007)<<"\n";


   }
  
    
}