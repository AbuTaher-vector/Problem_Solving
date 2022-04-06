#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    nn a;
    cin>>a;
   for(nn i=3;;i++)
   {
     nn k=(180*(i-2));
     if(k==a*i)
     {
        cout<<i<<" "<<"YES"<<nl;
        return 0;
     }
     if(k>a*i) break;

   }
   cout<<"NO"<<nl;
   return 0;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
    
}