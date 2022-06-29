#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
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
     nn n,z;
     cin>>n;
     vector<nn>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
        nn cnt=0,ans=0;
    for(nn i=0;i<n;i++)
    {
        if(v[i]!=0) cnt++;
        else if(v[i]==0 && cnt!=0) ans++,cnt=0;

    }
    if(cnt!=0) ans++;
    if(ans>2) cout<<2<<nl;
    else cout<<ans<<nl;
}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();
}