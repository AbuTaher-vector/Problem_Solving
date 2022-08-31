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
   string a,b;
   int t;
   cin>>t>>a;
   b="Timur";
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   if(a==b) cout<<"YES\n";
   else cout<<"NO\n";
   
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}