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
      
      int n,x,a;
    cin>>n>>x;
    map<int,int>mp;
    vector<int>v(x);
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(mp[a]==0) mp[a]=i;
    }
    for(int i=0;i<x;i++) cin>>v[i];
    for(int j=0;j<x;j++)
    {
        cout<<mp[v[j]]<<" ";
        int ind=mp[v[j]];
       for(auto x=mp.begin();x!=mp.end();x++)
       {
             if(x->second<ind) x->second++;
            else if(x->second==ind) x->second=1;
       }
    }
    cout<<"\n";
}    
