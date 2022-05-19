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
void code()
{
    ss s;
    cin>>s;
    ss a=s;
    sort(a.begin(),a.end());
    if(s.size()==2) cout<<s[1]<<nl;
    else cout<<a[0]<<nl;
    
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();

   
}