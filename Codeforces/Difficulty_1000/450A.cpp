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
     
     int n,m;
     cin>>n>>m;
     map<int,int>mp;
     int x;
     for(int i=1;i<=n;i++)
     {
        cin>>x;
        int t=x/m;
        if(x%m!=0) t++;
        mp[t]=i;


     }
     cout<<mp.rbegin()->second<<'\n';
      
}