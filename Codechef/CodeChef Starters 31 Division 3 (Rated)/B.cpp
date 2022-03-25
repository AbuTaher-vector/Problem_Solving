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
  nn n,x=0,y=0;
  cin>>n>>s;
  for(nn i=0;i<n;i++)
  {
    if(s[i]=='0') x++;
    else y++;
  }
  nn k=min(x,y),l=max(x,y);
  if(k==0 || l==0) cout<<1<<nl;
  else if(k==l) cout<<k*2<<nl;
  else cout<<k*2+1<<nl;


}
int main()
{ 
     nn tt;
     cin>>tt;
     while(tt--) code();   
}