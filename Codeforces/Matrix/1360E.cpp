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
int code()
{
   nn n;
   cin>>n;
   ss s[n];
   for(nn i=0;i<n;i++) cin>>s[i];
   for(nn i=0;i<n-1;i++)
   {
      for(nn j=0;j<n-1;j++)
      {
         if(s[i][j]=='1' && s[i+1][j]=='0' && s[i][j+1]=='0')
         {
            cout<<"NO"<<nl;
            return 0;
         }
      }

   }
   cout<<"YES"<<nl;
   return 0;
   
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();

   
}