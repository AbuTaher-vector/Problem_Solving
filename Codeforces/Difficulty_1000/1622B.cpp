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
void code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        string s;
    cin>>s;
    vector<int>ze,on;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='0') ze.push_back(v[i]);
       else on.push_back(v[i]);
    }
    sort(ze.begin(),ze.end());
    sort(on.begin(),on.end());

    map<int,int>mp;
    for(int i=0;i<ze.size();i++) mp[ze[i]]=i+1;
        int t=ze.size();
      t++;
      for(int i=0;i<on.size();i++) mp[on[i]]=t,t++;
        for(int i=0;i<n;i++) cout<<mp[v[i]]<<" ";
            cout<<'\n';
}
int main() {

     setup();
     
      int tt;
      cin>>tt;
      while(tt--) code();
      
}