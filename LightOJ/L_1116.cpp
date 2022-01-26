#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn j=0;
void code()
{

  ll x;
  cin>>x;
  j++;
  cout<<"Case "<<j<<": ";

  if(x%2==1) cout<<"Impossible"<<"\n";
  else
  {
    ll a,b,flag=0;
    for(ll i=2;i<=x/2;i+=2)
    {
      if(x%i==0 && (x/i)%2==1)
      {
        flag=1;
        a=x/i;
        b=i;
        break;
       
       
      }
    }
    if(flag) cout<<a<<" "<<b<<"\n";
    else cout<<"Impossible"<<"\n";
    
  }

}
int main()
{

     nn tt;
     cin>>tt;
     while(tt--) code();

    
}
