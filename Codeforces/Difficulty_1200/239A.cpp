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

     int y,k,n;
     cin >> y >> k >> n;
     int x = k - (y%k);
      if(x+y>n) cout << -1;
      else
      {
           while(x+y<=n)
           {
              cout << x << " ";
              x+=k;
           }
      }
      cout << '\n';
}