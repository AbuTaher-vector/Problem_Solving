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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
         int x=v[i];
         int set_bit=0;
         while(x!=0)
         {
            set_bit++;
            x>>=1;
         }
         mp[set_bit]++;
    }
    long long int ans=0;
    for(auto x:mp)
    {
        long long int t=x.second;
        ans+=(t*(t-1))/2;
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