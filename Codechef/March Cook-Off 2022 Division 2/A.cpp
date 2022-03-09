#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
nn code()
{
  ss s;
  char x;
  cin>>s>>x;
  for(nn i=0;i<s.size();i+=2)
  {
    if(s[i]==x)
    {
        cout<<"YES"<<nl;
        return 0;
    }
  }
  cout<<"NO"<<nl;
  return 0;
    
    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}