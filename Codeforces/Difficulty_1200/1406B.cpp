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
    sort(v.begin(),v.end());
    long long int ans=1;
    long long int k=1;
    for(int i=0;i<5;i++) ans*=v[i];
     k=1;
    for(int i=3,h=1;i>=0;i--,h++)
    {
        for(int j=i;j>=0;j--) k*=v[j];
        for(int j=n-1;j>=n-h;j--) k*=v[j]; 
         ans=max(k,ans);
         k=1;

    }
    for(int i=n-1;i>=n-1-4;i--) k*=v[i];
        ans=max(ans,k);
    cout<<ans<<'\n';


}
int main()
{
       setup();

       int tt;
       cin>>tt;
       while(tt--) code();

}