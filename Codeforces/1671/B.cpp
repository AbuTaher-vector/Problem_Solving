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
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
     nn two=0,three=0;
     for(nn i=0;i<n-1;i++)
     {
          if(v[i+1]-v[i]==1) continue;
          if(v[i+1]-v[i]==2) two++;
          else if(v[i+1]-v[i]==3) three++;
          else
          {
               cout<<"NO"<<nl;
               return 0;
          }
     }
     if(two<=2 && three==0)
     {
          cout<<"YES"<<nl;
          return 0;
     }
     if(three==1 && two==0)
     {
          cout<<"YES"<<nl;
          return 0;
     }
     cout<<"NO"<<nl;
     return 0;

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