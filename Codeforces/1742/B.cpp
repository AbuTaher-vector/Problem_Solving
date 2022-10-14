#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("put.txt", "w", stdout);
     #endif
}
void code()
{
   set<int>s;
    int n;
    cin>>n;
    int x;
   for(int i=1;i<=n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}