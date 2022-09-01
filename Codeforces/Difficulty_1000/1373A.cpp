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
void code()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c<=a) cout<<-1<<" ";
    else
    {
        int k=c/a;
        if(c%a==0) k--;
        cout<<k<<" ";
    }

    if(c/b>=a) cout<<-1<<"\n";
    else cout<<b<<"\n";
}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();
}