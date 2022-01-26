#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
      ss s,a;
      cin>>s>>a;
      vector<nn>v;
      for(nn i=0;i<a.size();i++)
      {
            nn pos=s.find(a[i]);
            v.push_back(pos);
      }
      nn sum=0;
      for(nn i=0;i<v.size()-1;i++)
      {
            sum+=abs(v[i]-v[i+1]);
 
      }
      cout<<sum<<nl;
 
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
   
}