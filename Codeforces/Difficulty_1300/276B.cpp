#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif

}
int main()
{
     setup();

     string s;
     cin>>s;
     map<char,int>mp;
     for(auto x:s) mp[x]++;
     vector<int>v;

     for(auto x:mp) if(x.second&1) v.push_back(x.second);
      sort(v.begin(),v.end());
      int cnt=0;
      if(!v.empty()) for(int i=0;i<v.size()-1;i++) cnt+=v[i];
      if(cnt&1) cout<<"Second"<<"\n";
      else cout<<"First"<<"\n";

}