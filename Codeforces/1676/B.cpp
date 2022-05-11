#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
      nn ans=0;
      for(nn i=0;i<n;i++)
      {
          ans+=(v[i]-v[0]);
      }
      cout<<ans<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}