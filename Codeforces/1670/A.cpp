#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,neg=0;
     cin>>n;
     vector<nn>v(n);
     for(nn i=0;i<n;i++)
     {
          cin>>v[i];
          if(v[i]<0) neg++;
          v[i]=abs(v[i]);
     }
     for(nn i=0;i<neg;i++) v[i]*=-1;
     if(is_sorted(v.begin(),v.end())) cout<<"YES"<<nl;
     else cout<<"NO"<<nl;
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