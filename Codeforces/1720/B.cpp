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
      for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());
       cout<<v[n-1]+v[n-2]-v[0]-v[1]<<"\n";
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}