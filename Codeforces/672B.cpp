#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
   nn n;
  ss s;
  cin>>n>>s;
  map<char,nn>mp;
  for(nn i=0;i<s.size();i++) mp[s[i]]++;
   nn sum=0,cnt=0;
  for(auto x:mp) 
   {
      sum+=(x.second-1);
      cnt++;
     
   }
   if(sum>26-cnt) cout<<-1<<nl;
   else cout<<sum<<nl;
   
}