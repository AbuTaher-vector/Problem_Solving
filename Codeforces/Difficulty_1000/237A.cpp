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
int main() {
     setup();
    
     int t;
     cin>>t;
     vector<pair<int,int>>v;
     while(t--)
     {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
     }
     int ans=1,cnt=1;
     for(int i=1;i<v.size();i++)
     {
          if(v[i-1].first==v[i].first && v[i-1].second==v[i].second) cnt++;
          else
          {

            ans=max(ans,cnt);
            cnt=1;
          } 
     }
     ans=max(ans,cnt);
     cout<<ans<<'\n';

}