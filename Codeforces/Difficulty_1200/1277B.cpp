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
    map<int,int>mp;
    vector<int>v;
    int n,x,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto x:mp) v.push_back(x.first);
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                ans++;
                int t=v[i]/2;
                while(t%2==0 && mp[t]==0)
                {
                    ans++;
                    t/=2;
                }
            }
        }
        cout<<ans<<'\n';

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
        
        
}    
