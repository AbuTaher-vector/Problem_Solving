#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n' 
void code()
{
      nn n;
      nn x;
      cin>>n;
      nn a=0,b=0;
      while(n--)
      {
         cin>>x;
         if(x&1) a++;
         else b++;
      }
      cout<<min(a,b)<<nl;
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
      
}