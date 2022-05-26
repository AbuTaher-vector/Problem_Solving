#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
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
   s.push_back('R');
   nn ans=0;
   nn cnt=1;
   for(nn i=0;i<s.size();i++)
   {
      if(s[i]!='R') cnt++;
      else
      {
          ans=max(cnt,ans);
          cnt=1;
      }
   }
   cout<<ans<<nl;
    

}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
}