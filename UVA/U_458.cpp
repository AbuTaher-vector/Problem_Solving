#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ss s;
  while(cin>>s)
  {
     ss a="";
     for(nn i=0;i<s.size();i++) a+=s[i]-7;
      cout<<a<<"\n";

  }
}