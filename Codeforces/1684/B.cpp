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
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c<<" "<<b+c<<" "<<c<<nl;
    
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();

   
}