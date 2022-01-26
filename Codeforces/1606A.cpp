#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
   ss s;
   cin>>s;
   nn n=s.size();
   if(n>1)
   {
      s[0]=s[n-1];
   }
   cout<<s<<nl;
   
} 
int main()
{
      nn tt;
      cin>>tt;
      while(tt--) code(); 
}