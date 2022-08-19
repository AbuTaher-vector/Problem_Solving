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
   long long int a,b,c,d;
   cin>>a>>b>>c>>d;
   long long int x=a*d,y=b*c;
   if(x==y) cout<<0<<'\n';
   else if(x==0 || y==0 || max(x,y)%min(x,y)==0) cout<<1<<'\n';
   else cout<<2<<'\n';    
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}