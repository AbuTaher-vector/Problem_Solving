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
  map<char,nn>mp;
  nn ans=s.size();
  for(nn i=0;i<s.size();i++)
  {
        mp[s[i]]++;
        if(mp[s[i]]==2)
        {
            ans-=2;
            mp.clear();
        }
  }
  cout<<ans<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}