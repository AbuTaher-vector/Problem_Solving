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
int main() {
     setup();
      
      int n;
      cin>>n;
      int ans=n,cnt=2;
      for(int i=n-1;i>=1;i--)
      {
         ans+=(i-1)*cnt;
         ans++;
         cnt++;
      }
   cout<<ans<<'\n';

}