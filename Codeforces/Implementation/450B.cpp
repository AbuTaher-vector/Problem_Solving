#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int main()
{
        setup();
        ll x,y,n;
        cin>>x>>y>>n;
        vector<ll>v{x-y,x,y,y-x,-x,-y};
        ll ans=v[n%6]%1000000007;
        if(ans<0) ans=1000000007+ans;
        cout<<ans<<nl;
       
}