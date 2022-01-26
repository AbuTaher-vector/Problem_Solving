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
  nn n;
  cin>>n>>s;
  nn k=s.size();
  ss ans="No";
  if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0') ans="Yes";
  if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[k-1]=='0') ans="Yes";
  if(s[0]=='2' && s[1]=='0' && s[k-2]=='2' && s[k-1]=='0') ans="Yes";
  if(s[0]=='2' && s[k-3]=='0' && s[k-2]=='2' && s[k-1]=='0') ans="Yes";
  if(s[k-4]=='2' && s[k-3]=='0' && s[k-2]=='2' && s[k-1]=='0') ans="Yes";
  cout<<ans<<nl;

}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
   
}