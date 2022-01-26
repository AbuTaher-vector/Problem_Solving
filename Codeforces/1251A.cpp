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
  s+=' ';
  map<char,nn>mp;
  for(nn i=0;i<s.size()-1;i++)
  {
   if(s[i]!=s[i+1]) mp[s[i]]++; 
   else i++;
  }
  for(auto x:mp) cout<<x.first;
   cout<<nl;
   
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();

}
