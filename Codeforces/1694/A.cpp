#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   nn a,b;
   cin>>a>>b;
   ss s;
   nn k=min(a,b);
   nn w=max(a,b)-min(a,b);
   while(k--)
   {
       s+="01";
   }
   ss x;
   if(a>b) x="0";
   else x="1";
   while(w--) s+=x;
   cout<<s<<nl;
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
      
}