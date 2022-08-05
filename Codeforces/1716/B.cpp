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
    cout<<n<<'\n';
    for(auto x:v) cout<<x<<" ";
        cout<<'\n';
    swap(v[0],v[n-1]);
    for(auto x:v) cout<<x<<" ";
        cout<<'\n';
      for(int i=0;i<n-2;i++)
      {
        swap(v[i],v[i+1]);
        for(auto x:v) cout<<x<<" ";
        cout<<'\n';

      }
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}    