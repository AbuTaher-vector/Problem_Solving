#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void  code()
{
  ss s;
  cin>>s;
  set<char>a(s.begin(),s.end());
  if(a.size()==1) cout<<s<<nl;
  else
  {
    for(nn i=0;i<s.size();i++) cout<<"10";
      cout<<nl;
  }
  
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code(); 
}