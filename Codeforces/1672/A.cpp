#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   nn n;
   cin>>n;
   vector<nn>v(n);
   for(nn i=0;i<n;i++) cin>>v[i];
    nn cnt=0;
   for(nn i=0;i<n;i++) cnt+=v[i]-1;
      if(cnt&1) cout<<"errorgorn"<<nl;
      else cout<<"maomao90"<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}