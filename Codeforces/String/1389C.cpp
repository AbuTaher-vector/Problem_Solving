#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   ss s;
   cin>>s;
   nn ans=0;
   for(char i='0';i<='9';i++)
   {
      for(char j='0';j<='9';j++)
      {
         nn a=0;
         for(auto x:s)
         {
            if(i==x && a%2==0) a++;
            else if(a&1 && j==x) a++; 
         }
          if(i!=j && a&1) a--;
      ans=max(ans,a);
         
      }

   }
   cout<<s.size()-ans<<nl;
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