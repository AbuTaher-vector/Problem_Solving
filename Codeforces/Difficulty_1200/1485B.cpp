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
       
       int n,q,k;
       cin>>n>>q>>k;
       vector<int>v(n+1);
       for(int i=1;i<=n;i++) cin>>v[i];
        while(q--)
        {
             int l,r;
             cin>>l>>r;
             long long int ans=k+v[r]-v[l]-2*(r-l)-1;
             cout<<ans<<'\n';
        }
      

}
