#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

}
void code()
{
      nn x,y;
      cin>>x>>y;
      ll sum=0;
      for(nn i=1;i<=y;i++) sum+=i;
         x--;
      nn a=y;
      while(x--) 
         {
            y+=a;
            sum+=y;
         }
      cout<<sum<<nl;
}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();

}