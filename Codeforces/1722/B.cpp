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
int code()
{
   int t;
   cin>>t;
   string a,b;
   cin>>a>>b;
   for(int i=0;i<t;i++)
   {
       if(a[i]!=b[i])
       {
           if((a[i]=='G' && b[i]=='B') || (a[i]=='B' && b[i]=='G') ) continue;
           else {
            cout<<"NO\n";
            return 0;
           }          
       }
   }
   cout<<"YES\n";
   return 0;

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}