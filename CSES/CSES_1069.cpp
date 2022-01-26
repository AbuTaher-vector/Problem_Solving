#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
  ss s;
  cin>>s;
  vector<nn>v;
  nn cnt=1;
  for(nn i=0;i<s.size()-1;i++)
  {
    if(s[i]==s[i+1]) cnt++;
    else
    {
      v.push_back(cnt);
      cnt=1;
    }

  }
  v.push_back(cnt);
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  cout<<v[0]<<"\n";
  
     
    
}