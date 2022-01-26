#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt,cnt=0;
      ss s;
      cin>>tt>>s;
      vector<nn>v;
      for(int i=0;i<tt;i++)
      {
          if(s[i]=='B') cnt++;
          else
          {
              if(cnt!=0) v.push_back(cnt);
              cnt=0;
          }
      }
       if(s[tt-1]=='B') v.push_back(cnt);
      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
      cout<<endl;

}