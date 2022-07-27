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

       int n;
       cin>>n;
       map<string,int>mp;
       string s;
       while(n--)
       {
          cin>>s;
          mp[s]++;
       }
       int mx=INT_MIN;
       for(auto x:mp) mx=max(mx,x.second);
        cout<<mx<<'\n';
}
