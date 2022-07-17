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
    vector<long long int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
         for(int j=v[i]-i;j<=n;j+=v[i])
         {
            if(j>=0)
            {
                if(v[i]*v[j]==i+j && i<j) ans++;
            }
         }
    }
    cout<<ans<<'\n';

}
int main()
{
       setup();

       int t;
       cin>>t;
       while(t--) code();
}