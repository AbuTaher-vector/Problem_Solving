#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    nn n,x;
    cin>>n;
    map<nn,nn>mp;
    while(n--)
    {
       cin>>x;
       mp[x]++;
    }
    for(auto x:mp)
    {
       if(x.second>=3) 
       {
          cout<<x.first<<nl;
          return 0;
       }
    }
    cout<<-1<<nl;
    return 0;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}