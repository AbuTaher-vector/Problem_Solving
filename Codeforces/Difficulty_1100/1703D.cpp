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
    vector<string>v(n+1);
    map<string,int>mp;
    vector<int>ans(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;

    }
    for(int i=1;i<=n;i++)
    {   

       if(v[i].size()==1) continue;
            for(int j=0;j<v[i].size()-1;j++)
            {
               string a=v[i].substr(0,j+1);
               string b=v[i].substr(j+1,v[i].size()-j);
               if(mp[a] && mp[b])
               {
                ans[i]++;
                break;
   
               } 

            }
       }
       
    
    for(int i=1;i<=n;i++) cout<<ans[i];
        cout<<'\n';
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}