#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,a,b,c,d;
     cin>>n>>a>>b>>c>>d;
     if(n*(a-b)>(c+d)) cout<<"No"<<nl;
     else if(n*(a+b)<(c-d)) cout<<"No"<<nl;
     else cout<<"Yes"<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
}