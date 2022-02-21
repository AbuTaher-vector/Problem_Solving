#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n;
     cin>>n;
     vector<nn>v(n);
     for(nn i=0;i<n;i++) cin>>v[i];
     nn ans=0;
     for(nn i=0;i<n;i++) ans|=v[i];
          cout<<ans<<nl;
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}