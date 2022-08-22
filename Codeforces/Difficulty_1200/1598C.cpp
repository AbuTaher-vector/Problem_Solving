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
int code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    long long sum=0;
    map<long long int,long long int>mp;
    for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            mp[v[i]]++;
            sum+=v[i];
        }
        if((sum*2)%n!=0) 
        {
            cout<<0<<'\n';
            return 0;
        }
      int k=sum*2/n;
      long long int ans=0;
    for(auto x:mp)
    {
        long long int a=x.first;
        long long int b=x.second;

        if(a*2==k) ans+=(b*(b-1))/2;
        else 
        {
            if(mp[k-a] && mp[a])
            {
                ans+=(b*mp[k-a]);
                mp[k-a]=0,mp[a]=0;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
    
}
int main()
{
       setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}