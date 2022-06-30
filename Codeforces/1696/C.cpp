#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif

}
void code()
{
    nn n,m;
    cin>>n>>m;
    vector<nn>a(n);
    for(nn i=0;i<n;i++) cin>>a[i];
      vector<pair<nn,ll>>va;
      vector<pair<nn,ll>>vb;
     for(nn i=0;i<n;i++)
     {
         nn q=a[i];
         while(q%m==0) q/=m;
         nn x=a[i]/q;
         if(!va.empty() && q==va.back().first) va.back().second+=x;
         else va.push_back({q,x});
     }
     nn k;
     cin>>k;
     vector<nn>b(k);
     for(nn i=0;i<k;i++) cin>>b[i];
      for(nn i=0;i<k;i++)
     {
         nn q=b[i];
         while(q%m==0) q/=m;
         nn x=b[i]/q;
         if(!vb.empty() && q==vb.back().first) vb.back().second+=x;
         else vb.push_back({q,x});
     }
     if(va==vb) cout<<"YES"<<nl;
     else cout<<"NO"<<nl;
}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();
}