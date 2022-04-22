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
     if(n>=1900) cout<<"Division 1"<<nl;
      else if(n>=1600 && n<=1899) cout<<"Division 2"<<nl;
      else if(n>=1400 && n<=1599) cout<<"Division 3"<<nl;
      else if(n<=1399) cout<<"Division 4"<<nl;

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