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

       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
       int ans=INT_MIN;
       for(int i=0,j=0;j<n;j++)
       {
            if(v[j]-v[i]<=5) ans=max(ans,j-i+1);
            else i++;
       }
       cout<<ans<<'\n';
}
