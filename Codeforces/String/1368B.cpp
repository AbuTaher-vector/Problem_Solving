#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int main()
{
     setup();
      ll x;
      cin>>x;
      ss s="codeforces";
      vector<nn>v(10,1);
      nn index=0;
      ll cnt=1;
      while(cnt<x)
      {
           cnt/=v[index];
           cnt*=(v[index]+1);
           v[index]++;
           index++;
           if(index>9) index=0;

      }
      for(nn i=0;i<10;i++)
      {
           while(v[i]--) cout<<s[i];
      }
      cout<<nl;
}