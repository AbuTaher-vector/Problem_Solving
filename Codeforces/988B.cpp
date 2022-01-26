#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  vector<pair<nn,ss>>v;
  nn n;
  cin>>n;
  ss s;
  while(n--)
  {
    cin>>s;
     nn k=s.size();
     v.push_back(make_pair(k,s));

  }
  
  sort(v.begin(),v.end());
  for(nn i=0;i<v.size()-1;i++)
  {
    ss a=v[i].second;
    ss b=v[i+1].second;
    if(b.find(a)==-1)
    {
      cout<<"NO"<<nl;
      return 0;
    }
  }
  cout<<"YES"<<nl;
  for(nn i=0;i<v.size();i++) cout<<v[i].second<<nl;

}