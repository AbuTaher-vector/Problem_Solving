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
     cin>>n>>z;
     vector<ll>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
      ll mx=INT_MIN;
   for(nn i=0;i<n;i++) mx=max(mx,v[i]|z);
   cout<<mx<<nl;
}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();
}