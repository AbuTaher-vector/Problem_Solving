#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
int code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int fact1=0,fact2=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1]) fact1++;
        if(fact1 && v[i]<v[i+1]) fact2++;
    }
    if(fact1 && fact2) cout<<"NO\n";
    else cout<<"YES\n";

}
int main() {
     setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}