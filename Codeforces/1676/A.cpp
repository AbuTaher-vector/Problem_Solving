#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    ss s;
    cin>>s;
    nn a=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
     nn b=(s[3]-'0')+(s[4]-'0')+(s[5]-'0');
     if(a==b) cout<<"YES"<<nl;
     else cout<<"NO"<<nl;
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