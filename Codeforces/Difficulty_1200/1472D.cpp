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
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    long long int alice=0,bob=0;
    for(int i=0;i<n;i+=2) if(v[i]%2==0) alice+=v[i];
      for(int i=1;i<n;i+=2) if(v[i]%2==1) bob+=v[i];
         if(alice>bob) cout<<"Alice"<<endl;
         else if(bob>alice) cout<<"Bob"<<endl;
         else cout<<"Tie"<<endl;



}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}