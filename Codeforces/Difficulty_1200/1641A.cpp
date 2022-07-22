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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<long long int,long long int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int cnt=0;
    for(auto x:mp)
    {
         if(x.second>0)
         {
            if(mp[x.first*k])
            {
                if(x.second>mp[x.first*k]) cnt+=x.second-mp[x.first*k],mp[x.first*k]=0;
                else mp[x.first*k]-=x.second;

            }
           else cnt+=x.second;
         }
    }
    cout<<cnt<<'\n';


}
int main()
{
       setup();
       int t;
       cin>>t;
       while(t--) code();
}
