#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
} 
int an(int x)
{
     int y=sqrt(x);
     return y*y==x;
}
void code()
{
    int x;
    cin>>x;
    if(x&1) cout<<"NO\n";
    else
    {
        if(x%2==0 && an(x/2)) cout<<"YES\n";
        else if(x%4==0 && an(x/4)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}