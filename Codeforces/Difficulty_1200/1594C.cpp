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
     int n;
     char a;
     string s;
     cin>>n>>a>>s;
     int cnt=0;
     for(int i=0;i<n;i++) if(s[i]!=a) cnt++;
      if(cnt==0)
      {
         cout<<0<<"\n";
         return 0;
      }
     for(int i=1;i<=n;i++)
     {
         int cnt=0;
         for(int j=i;j<=n;j+=i)
         {
            if(s[j-1]!=a)
            {
               cnt++;
               break;
            }
         }
         if(!cnt)
         {
            cout<<1<<"\n"<<i<<"\n";
            return 0;
         }
     }
     cout<<2<<"\n"<<n-1<<" "<<n<<"\n";
     return 0;

}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}