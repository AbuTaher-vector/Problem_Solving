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
   nn a,b;
   cin>>a;
   vector<nn>v(a);
   for(nn i=0;i<a;i++) cin>>v[i];
       cin>>b;
   vector<nn>x(b);
   for(nn i=0;i<b;i++) cin>>x[i];
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      sort(x.begin(),x.end());
      reverse(x.begin(),x.end());

      if(v[0]>x[0]) cout<<"Alice"<<nl<<"Alice"<<nl;
      else if(x[0]>v[0]) cout<<"Bob"<<nl<<"Bob"<<nl;
      else cout<<"Alice"<<nl<<"Bob"<<nl;

  
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
      
}