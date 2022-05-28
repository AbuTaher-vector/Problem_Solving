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
int main()
{
   setup();
   nn n;
   ss s;
   cin>>n>>s;
   if(n%2)
   {
       reverse(s.begin(),s.end());
       for(nn i=1;i<n-1;i+=2) cout<<s[i];
        reverse(s.begin(),s.end());
       for(nn i=0;i<n;i+=2) cout<<s[i];
        cout<<nl;
   }
   else
   {
       reverse(s.begin(),s.end());
       for(nn i=1;i<n;i+=2) cout<<s[i];
        reverse(s.begin(),s.end());
       for(nn i=1;i<n;i+=2) cout<<s[i];
        cout<<nl;

   }
}