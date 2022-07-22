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
int code()
{
    int n;
    cin>>n;
    int x=4*n;
    vector<int>v(x);
    for(int i=0;i<x;i++) cin>>v[i];
        sort(v.begin(),v.end());
    int com;
      if(v[0]==v[1] && v[x-1]==v[x-2]) com=v[0]*v[x-1];
      else
      {
        cout<<"NO"<<'\n';
        return 0;
      }

      for(int i=2;i<x/2;i+=2)
      {
          if(v[i]!=v[i+1] || v[x-i-1]!=v[x-i-2] || v[i]*v[x-i-1]!=com)
          {
            cout<<"NO"<<'\n';
            return 0;
          }
      }
      cout<<"YES"<<'\n';
      return 0;
}
int main()
{
       setup();
       
       int t;
       cin>>t;
       while(t--) code();
}
