#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn x,y;
  char s;
  cin>>x>>s>>y;
  while(1)
  {
    y++;
    x+=y/60;
    y%=60;
    x%=24;
    if(x/10==y%10 && x%10==y/10) break;
  } 
  cout<<x/10<<x%10<<s<<y/10<<y%10<<nl;


}