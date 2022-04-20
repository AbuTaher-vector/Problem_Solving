#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     
    nn x,y;
    cin>>x>>y;
    if(x>y) cout<<"NO"<<nl;
    else
    {
        if(y%x==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

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