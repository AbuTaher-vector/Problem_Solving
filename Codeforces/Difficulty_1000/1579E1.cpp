#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int>ans1,ans2;
    int cnt=0;
    ans1.push_back(v[0]);
     for(int i=1;i<n;i++)
     {
          if(ans2.size())
          {
             if(v[i]<=ans2.back()) ans2.push_back(v[i]);
             else ans1.push_back(v[i]);

          }
          else
          {
            if(v[i]<=ans1[0]) ans2.push_back(v[i]);
             else ans1.push_back(v[i]);


          }
     }
     reverse(ans2.begin(),ans2.end());
     for(auto x:ans2) cout<<x<<" ";
        for(auto x:ans1) cout<<x<<" ";
            cout<<'\n';
     
    

}
int main() {
     setup();
        
        int tt;
        cin>>tt;
        while(tt--) code();
}