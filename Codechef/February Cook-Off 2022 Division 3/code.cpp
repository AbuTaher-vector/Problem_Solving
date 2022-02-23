#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,m;
     cin>>n>>m;
     vector<nn>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
          sort(v.begin(),v.end());
     reverse(v.begin(),v.end());
     nn cnt=0,sum=0;
     for(auto x:v)
     {
          cnt++;
          sum+=x;
          if(sum>=m) break;
     }
     cout<<n-cnt<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}