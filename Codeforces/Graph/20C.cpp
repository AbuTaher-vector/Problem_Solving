#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
const nn N=1e6;
vector<ll>vis(N,0);
vector<pair<ll,ll>>v[N];
vector<ll>dis(N,N);
vector<ll>path(N);
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     ll n,m,x,y,wt;
     cin>>n>>m;
     while(m--)
     {
         cin>>x>>y>>wt;
         v[x].push_back({y,wt});
         v[y].push_back({x,wt});
     }
     priority_queue<pair<ll,ll>>pq;
     pq.push({0,1});
     dis[1]=0;
     while(!pq.empty())
     {
         nn node=pq.top().second;
         pq.pop();
         if(vis[node]) continue;
         vis[node]++;
         for(auto x:v[node])
         {
            ll a=x.first;
            ll wttt=x.second;
            if(dis[node]+wttt<dis[a] && !vis[a])
            {
               dis[a]=dis[node]+wttt;
               pq.push({-dis[a],a});
              path[a]=node;
            }
         }

     }
     if(!vis[n]) cout<<-1<<nl;
     else
     {
        vector<nn>ans;
     while(path[n]) ans.push_back(n),n=path[n];
     ans.push_back(n);
     reverse(ans.begin(),ans.end());
     for(auto x:ans) cout<<x<<" ";
      cout<<nl;

     }


     
}