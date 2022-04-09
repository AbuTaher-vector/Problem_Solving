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
  nn a=0,b=0;
  for(nn i=0;i<s.size();i++)
  {
    if(s[i]=='B')
    {
      if(a>0) a--;
      else b++;
    }
    else a++;

  }
  cout<<a+b%2<<nl;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}