#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  ss a,b;
  cin>>a>>b;
  nn n=a.size(),m=b.size();
  if(a==b)
  {
    cout<<"YES"<<nl;
    return 0;
  }
  if(m!=n)
  {
    cout<<"NO"<<nl;
    return 0;
  }
  vector<nn>v;
  for(nn i=0;i<a.size();i++)
  {
    if(a[i]!=b[i])
    {
      v.push_back(i);
    }

  }
  if(v.size()!=2)
  {
    cout<<"NO"<<nl;
    return 0;
  }
  swap(a[v[0]],a[v[1]]);
  if(a==b) cout<<"YES"<<nl;
  else cout<<"NO"<<nl;

}