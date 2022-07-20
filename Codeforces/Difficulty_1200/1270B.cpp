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
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
        for(int i=1,j=2;j<=n;i++,j++)
        {
            if(abs(v[i]-v[j])>=2)
            {
                cout<<"YES\n"<<i<<" "<<j<<'\n';
                return 0;
            }
        }
    
   cout<<"NO\n";


}
int main()
{
       setup();
       int t;
       cin>>t;
       while(t--) code();
}
