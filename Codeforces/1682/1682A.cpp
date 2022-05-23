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
   nn n;
   ss s;
   cin>>n>>s;

   nn x=n/2;
   if(n%2==0) x--;
   nn cnt=1;
   for(nn i=x;i>0;i--)
   {
      if(s[i]==s[i-1]) cnt++;
      else break;
   }
   if(n%2) cout<<cnt*2-1<<nl;
   else cout<<cnt*2<<nl;
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
      
}