#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     
     nn x,y,z;
     cin>>x>>y>>z;
     nn k=y/x;
     if(y%x) k++;
     if(k>=z) cout<<0<<nl;
     else cout<<z-k<<nl;

     

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