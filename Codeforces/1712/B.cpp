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
    vector<int>v(n);
    for(int i=0;i<n;i++) v[i]=i+1;
        reverse(v.begin(),v.end());
    for(int i=0;i<n-1;i++) swap(v[i],v[i+1]),i++;
        reverse(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
        cout<<'\n';

    
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}