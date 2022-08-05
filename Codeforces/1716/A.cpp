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
    int n;
    cin>>n;
    int flag=0,t;
   if(n%3==0) cout<<n/3;
   else
   {
       int flag=0;
       int ans=n/3;
       if(n%3==2) cout<<ans+1;
       else
       {
           int t=n/3;
           t--;
           if(t<0) t=0;
           cout<<t+2;
       }
   }
   cout<<'\n';
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}    