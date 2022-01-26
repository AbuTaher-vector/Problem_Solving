#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
  
  nn tt;
  cin>>tt;
  set<nn>s;
  for(nn i=1;i<=tt;i++)
  {
  	nn x;
  	cin>>x;
  	s.insert(x);
  }
  cout<<s.size()<<"\n";
  
     
    
}