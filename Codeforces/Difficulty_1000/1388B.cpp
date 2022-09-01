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
    int n;
    cin>>n;
    int k=n/4;
    if(n%4!=0) k++;
    n-=k;
    while(n--) cout<<9;
    while(k--) cout<<8;
    cout<<'\n';

}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();
}