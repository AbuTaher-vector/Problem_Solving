#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   ll n,sum=0;
   cin>>n;
   vector<ll>v(n),a,b;
   for(nn i=0;i<n;i++) cin>>v[i];
    for(nn i=0;i<n;i++)
    {
         if(i & 1) a.push_back(abs(v[i]));
          else b.push_back(abs(v[i]));
    }
   sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll k=a.size();
    if(a[k-1]>b[0]) swap(a[k-1],b[0]);
    for(auto x:b) sum+=x;
    for(auto x:a) sum-=x;
        cout<<sum<<nl;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
      
}