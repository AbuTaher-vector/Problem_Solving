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
int main()
{
     setup();
     int n,m;
     cin>>n>>m;
     vector<int>a(n),b(m);
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<m;i++) cin>>b[i];

      sort(a.begin(),a.end());
      sort(b.begin(),b.end());

      int ans=a[0]*2;
      if(ans<=a[n-1]) ans=a[n-1];

      if(ans<b[0]) cout<<ans;
      else cout<<-1;

      cout<<"\n";
}