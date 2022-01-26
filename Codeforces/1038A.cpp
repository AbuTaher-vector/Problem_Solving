#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

      nn n,k,cnt=1;
      cin>>n>>k;
      ss s;
      cin>>s;
      set<char>S;
      vector<nn>v;
      sort(s.begin(),s.end());
      for(nn i=0;i<s.size();i++) S.insert(s[i]);
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
      if(S.size()<k) cout<<0<<endl;
      else cout<<k*v[0]<<endl;



}