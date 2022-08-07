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
    int a,b,c;
    cin>>a>>b>>c;
    int gcd=1;
    c--;
    while(c--) gcd*=10;
    int d=min(a,b);
    int e=max(a,b);
    d--;
    e--;
    int x=1,y=1;
    while(d--) x*=10;
    while(e--) y*=10;
    y+=gcd;
    if(a==b || min(a,b)==a) cout<<x<<" "<<y<<'\n';
    else cout<<y<<" "<<x<<'\n';




}
int main()
{
       setup();
      
       int tt;
       cin>>tt;
       while(tt--) code();
}    
