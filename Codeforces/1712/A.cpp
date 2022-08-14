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
    vector<int>v(n),a(n);
    for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            a[i]=v[i];
        }
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]>k) ans++;
        }
        cout<<ans<<"\n";

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}