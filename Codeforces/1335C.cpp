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
     cin>>n;
      map<nn,nn>mp;
      nn x;
      for(nn i=0;i<n;i++)
      {
        cin>>x;
        mp[x]++;
      }
      x=0;
      nn d=0;
      for(auto a:mp) d=max(d,a.second),x++;
        x--;
        if(d-x>1) x++;
        cout<<min(x,d)<<nl;

     
    
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}