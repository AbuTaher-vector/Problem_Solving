#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
   nn n;
   cin>>n;
   vector<nn>a(n),b(n);
   for(nn i=0;i<n;i++) cin>>a[i];
      for(nn i=0;i<n;i++) cin>>b[i];
         cout<<b[0]-a[0]<<" ";
      for(nn i=1;i<n;i++)
      {
         if(a[i]>=b[i-1]) cout<<b[i]-a[i]<<" ";
         else cout<<b[i]-b[i-1]<<" ";

      }
      cout<<nl;

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