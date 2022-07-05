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
   if(n&1) cout<<-1<<"\n";
   else cout<<0<<" "<<n/2<<" "<<n/2<<"\n";
   
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}